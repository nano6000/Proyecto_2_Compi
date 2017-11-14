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
#define YYLAST   3222

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
       0,    36,    40,    44,    48,    51,    52,    53,    54,    55,
      56,    57,    61,    62,    66,    67,    71,    72,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    89,    90,
      91,    95,    96,    97,    98,    99,   100,   101,   105,   106,
     107,   108,   109,   110,   114,   115,   119,   120,   121,   122,
     126,   127,   128,   129,   130,   134,   135,   136,   137,   138,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   154,
     155,   156,   157,   158,   162,   163,   164,   168,   169,   170,
     174,   175,   176,   180,   181,   182,   186,   187,   188,   192,
     193,   194,   195,   199,   200,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   218,   219,   223,   228,
     229,   230,   231,   232,   237,   238,   239,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   258,   259,
     260,   264,   265,   266,   267,   271,   272,   273,   274,   275,
     276,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   299,   300,   301,
     305,   306,   310,   311,   315,   316,   317,   321,   322,   323,
     324,   328,   329,   333,   334,   335,   339,   340,   341,   342,
     343,   347,   348,   352,   353,   357,   361,   362,   363,   364,
     368,   369,   373,   374,   378,   379,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   401,   402,   403,   404,   408,   409,   414,   415,   419,
     420,   424,   425,   426,   431,   432,   436,   437,   441,   442,
     443,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   471,   472,   473,   477,   478,   479,   480,   484,
     488,   489,   493,   494,   498,   502,   503,   504,   505,   506,
     507,   511,   512,   513,   517,   518,   522,   523,   527,   528,
     532,   533,   534,   538,   539,   540,   544,   545,   546,   547,
     548,   549,   553,   554,   555,   556,   557,   561,   562,   566,
     567,   571,   572,   576,   577
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
    2891,   -45,   -40,  2946,  -363,  -363,  2836,  -363,  -363,  -363,
     997,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,    38,     0,    11,  -363,
    -363,    56,  1002,  1063,  -363,    40,  -363,  -363,  1124,  1185,
    1246,  -363,  -363,    -6,  -363,  -363,  -363,  2665,  2688,  2688,
      42,    65,  1301,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   169,  -363,  2712,  -363,   147,   164,   249,    13,   288,
      86,    28,   106,   215,     3,  -363,   133,   152,   244,  1356,
    3151,    87,  -363,    62,   246,   174,  -363,    49,  -363,   847,
      10,    69,  -363,  -363,   198,  3080,  -363,  -363,  -363,   997,
    1301,  -363,  1301,  -363,  -363,  3151,  1119,   -46,   409,  -363,
    -363,    77,  3151,    72,  3151,   192,   275,  -363,  -363,  1950,
     997,   277,  -363,  2712,  2712,  2712,  2215,  2249,  2290,  2313,
    2341,  2365,  2388,  2416,  2440,  2463,  2491,  2515,  2538,  2566,
    2590,   997,   279,   244,   206,   135,  -363,   228,   232,   241,
    -363,    62,  -363,   253,  -363,   170,  -363,  -363,    62,    -5,
    2008,   571,  2946,  -363,  -363,  -363,  -363,  2780,    58,   476,
      10,  3080,  2984,  -363,    52,  -363,   231,   260,   261,   265,
       8,   267,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,   997,  -363,  -363,   997,  -363,    82,
    1509,   145,  -363,   166,  -363,  1724,  -363,  -363,    39,  -363,
     234,  -363,  -363,  -363,  -363,  -363,   147,  -363,   147,  -363,
     164,  -363,   164,  -363,   249,  -363,   249,  -363,   249,  -363,
     249,  -363,    13,  -363,    13,  -363,   288,  -363,    86,  -363,
      28,  -363,   106,  -363,   215,   236,   268,   138,   346,    19,
    -363,  -363,  -363,  -363,  -363,  1763,  -363,  -363,  -363,  -363,
     170,  -363,    -6,  1916,  -363,   271,   997,   272,   282,   283,
     284,  1474,   286,   361,   290,   293,  2042,  -363,   997,  -363,
     367,   287,    59,  -363,  -363,   148,  2065,    14,  -363,  -363,
    -363,  -363,   663,  -363,  -363,  -363,  -363,  -363,    56,   755,
    -363,  -363,  -363,  -363,  2946,   295,   294,  -363,   190,  1818,
    -363,   291,   297,  1568,  3032,  -363,  -363,  -363,   997,    91,
    -363,   292,   997,   298,   298,  -363,  -363,  3117,  -363,  -363,
    -363,   300,   301,  1818,  -363,   303,   304,  1612,   166,   307,
    1671,  1916,  -363,  -363,  2613,  -363,  2641,   305,    26,  -363,
    -363,  -363,  -363,  -363,  -363,  1474,   306,  1474,   997,   997,
     997,   327,   939,   314,  -363,  -363,  -363,   137,   311,  -363,
    -363,  -363,  1858,  -363,  -363,  -363,  -363,  -363,  -363,    35,
    -363,   338,  -363,   394,   318,  1818,  -363,  -363,   997,  -363,
     320,   321,  -363,  -363,  -363,    61,   997,  -363,   323,   194,
    -363,   324,  -363,  -363,   322,  1818,  -363,  -363,   997,  -363,
     328,  -363,   325,  1818,  -363,   329,   330,  1715,   150,    -6,
    -363,    -6,  -363,  -363,  -363,  -363,  1474,  -363,   196,   213,
     217,   334,  2100,  2100,  -363,  -363,  -363,  -363,  -363,  2065,
    1419,  -363,   149,  -363,  -363,  -363,  -363,  -363,   335,   336,
    -363,  -363,  -363,  -363,   997,  -363,  3117,   997,  -363,   337,
     339,  -363,  -363,   341,  1818,  -363,  -363,   997,  -363,   342,
    1893,  -363,  -363,  1474,  1474,  1474,   997,  2157,  2192,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   343,   358,
    -363,  -363,   347,  -363,  -363,   218,  1474,   219,  1474,   224,
    -363,  -363,  1474,   363,  -363,  1474,  -363,  1474,  -363,  -363,
    -363,  -363
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   300,   116,     0,   297,   299,   115,
       0,   127,   156,   135,   136,   137,   139,   140,   190,   186,
     187,   188,   150,   142,   143,   144,   145,   148,   149,   146,
     147,   141,   151,   152,   160,   161,     0,     0,   189,   191,
     138,     0,     0,     0,   154,     0,   155,   153,     0,     0,
       0,     1,   298,     0,     5,     6,     7,     0,     0,     0,
       0,     0,     0,    38,    43,    41,    40,    42,    39,    18,
      11,    31,    44,     0,    46,    50,    55,    60,    69,    74,
      77,    80,    83,    86,    89,   108,     0,   180,     0,     0,
       0,   110,   109,     0,     0,     0,   114,     0,   128,     0,
     195,     0,   117,   119,   159,     0,   121,   123,   125,     0,
       0,    35,     0,    32,    33,     0,     0,     0,    44,    93,
     106,     0,   168,   227,   170,     0,     0,    24,    25,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,   181,     0,     0,     0,
     113,     0,   197,     0,   196,   214,   112,   111,     0,     0,
       0,     0,     0,   254,   303,   133,   302,     0,     3,     0,
     194,     0,     0,   162,     0,   166,     0,     0,     0,     0,
       0,     0,    10,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    95,     0,     9,     8,     0,   167,     3,
       0,   229,   226,   230,   169,     0,    23,    20,     0,    28,
       0,    22,    47,    48,    49,    54,    53,    52,    51,    58,
      56,    59,    57,    67,    65,    68,    66,    63,    61,    64,
      62,    72,    70,    73,    71,    76,    75,    79,    78,    82,
      81,    85,    84,    88,    87,     0,     0,     0,     0,     0,
     176,   193,   192,   185,   130,     0,   198,   189,   215,   213,
     212,   129,   132,     0,   131,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,   274,
       0,   106,     0,   278,   256,     0,     0,     0,   260,   279,
     265,   266,     0,   276,   267,   268,   269,   270,     0,     0,
     304,   301,   224,   209,     0,     0,   218,   219,     0,     0,
     199,    39,     0,     0,     0,   157,   163,   164,     0,     0,
     171,   175,     0,    36,     0,    37,    13,     0,    94,   107,
     248,     0,     0,     0,   232,    39,     0,     0,   228,     3,
       0,     0,    45,    21,     0,    19,     0,     0,     0,   178,
     184,   177,   182,   216,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,   294,   295,     0,     0,   263,
     282,   281,     0,   252,   255,   259,   261,   275,   277,     0,
     208,     3,   210,     0,     0,     0,   200,   207,     0,   206,
      39,     0,   158,   173,   165,     0,     0,    92,     0,     0,
      14,     0,   249,   231,     0,     0,   233,   239,     0,   238,
       0,   250,     0,     0,   240,    39,     0,     0,     0,    30,
      29,    91,    90,   264,   179,   271,     0,   273,     0,     0,
       0,     0,     0,     0,   292,   296,   262,   253,   258,     0,
       0,   221,     0,   222,   217,   220,   225,   202,     0,     0,
     203,   205,   172,   174,     0,    12,     0,     0,   235,     0,
       0,   237,   251,     0,     0,   241,   247,     0,   246,     0,
       0,    26,   272,     0,     0,     0,     0,     0,     0,   257,
     201,   204,    17,    15,    16,   234,   236,   243,     0,     0,
     244,    27,   284,   285,   286,     0,     0,     0,     0,     0,
     242,   245,     0,     0,   290,     0,   288,     0,   283,   287,
     291,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,     2,  -363,  -363,  -363,  -363,   -52,  -363,  -363,
      48,  -363,   -50,   186,   189,   116,   197,   296,   299,   302,
     308,   309,  -363,    -7,   122,  -363,   -61,   -76,  -363,    24,
     -31,  -363,   -93,  -363,    31,  -363,  -363,   259,  -168,   -80,
    -363,    43,  -363,   310,  -243,  -363,    -3,  -363,  -363,   -37,
     -95,  -113,  -144,  -145,  -363,    53,  -363,   175,  -116,  -202,
     -94,    92,  -362,  -363,   154,   -90,  -150,  -363,   -32,  -363,
     151,  -344,  -363,  -363,  -363,  -363,   441,  -363,  -363
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,   172,    95,    69,    70,   409,   410,    71,   218,
     118,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   119,   120,   204,   292,    86,    96,   293,
      41,    97,    98,    42,   122,    44,    45,   182,   183,   123,
     329,   330,    46,   155,   156,    47,   124,    49,    50,   265,
     100,   101,   270,   341,   316,   317,   318,   411,   342,   213,
     294,   295,   296,   297,   298,     5,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     6,     7,     8,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   121,     3,    85,    99,   175,   180,   212,     3,   348,
     211,   102,   103,   157,   326,   185,   362,   106,   107,   108,
     449,   150,   154,   132,     4,   184,   140,   141,   443,   154,
       4,     9,   192,   315,    43,   323,   162,    10,    -2,    48,
      48,    87,   208,   104,   214,    48,    48,    48,   186,   121,
     166,   121,   269,   162,   109,    -2,   163,    91,    72,    -2,
     380,   312,   162,   162,    -2,    -2,   347,   176,   264,   220,
     162,     9,    -2,    43,    43,   271,   274,    89,   205,    43,
      43,    43,    85,   222,   223,   224,   336,   178,    90,   179,
     255,   185,   185,   288,   109,   109,   211,   385,   487,   488,
     290,   184,   184,   151,   361,   111,   113,   114,   109,   142,
     143,   434,   450,  -223,   210,   362,  -223,   353,   449,   115,
     354,    72,    88,   174,   105,   167,   147,    -4,   327,    93,
     168,   371,    92,    93,   328,   381,   313,    72,    93,    93,
     207,   308,   116,   328,    -4,   311,    93,   331,    -4,   209,
     162,   210,    -2,    -4,    -4,   206,   326,   364,   207,   209,
     340,   210,   268,   160,    -4,   352,  -197,   404,   161,    48,
    -197,   175,   405,   146,    -4,   395,   268,   126,   127,   128,
     314,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,   415,
     366,   310,   384,    43,   422,   148,   427,   268,    19,    20,
      21,   314,   378,   445,   152,   435,   259,   437,   207,   358,
     260,   173,   209,   359,   210,   377,   450,  -229,   210,   382,
    -229,   480,   149,   383,   185,   481,   153,   125,   191,   133,
     134,   267,   135,   349,   184,   350,   129,   154,   130,   164,
     348,   219,   403,   136,   137,   131,   234,   236,   238,   240,
     138,   139,    -4,    72,   158,   159,   165,   363,   392,    85,
     215,   393,   465,   453,   483,   466,   452,   207,   216,   474,
     221,    85,   181,   389,   256,   187,   482,   188,   448,   258,
     189,   484,   173,   291,   207,   485,   513,   515,   207,   207,
     207,   322,   517,   144,   145,   207,   261,   438,   439,   440,
     262,    48,   207,   332,   355,   207,   268,   207,   356,   263,
     363,    85,   226,   228,    72,   407,   338,   230,   232,   339,
     463,   266,   346,   502,   503,   504,    72,   452,   333,   334,
     268,   242,   244,   335,   363,    43,   357,   268,   337,   432,
     360,   314,   451,   365,   367,   489,   514,   180,   516,   368,
     369,   370,   518,   372,   373,   520,   374,   521,   331,   375,
     379,   396,  -254,   390,   406,   391,    72,   397,   412,   413,
      72,   433,   351,   416,   417,   421,   448,   173,   436,   441,
     444,   446,   363,   314,   454,   173,   442,   456,   457,    85,
     460,   461,   468,   472,    72,   464,   467,   512,   471,   475,
     476,   486,   363,   163,   493,   490,   491,   495,   173,   496,
     268,   497,   500,   510,   363,   505,   507,   509,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   511,   519,
     324,   394,   246,   428,   455,   401,   248,    52,   462,     0,
     250,   386,   314,   388,    72,     0,     0,   252,     0,   254,
       0,     0,     0,   257,     0,   414,     0,     0,     0,   420,
       0,   363,   426,   173,     0,     0,   430,    53,     0,    54,
      55,    56,     0,    57,     0,    58,    59,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,     0,
     319,     0,     0,     0,    19,    20,    21,   458,     0,     0,
     459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
     470,     0,     0,     0,     0,   473,    60,   267,    61,   479,
       0,     0,     0,    62,     0,     0,   320,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,   321,     0,
       0,   173,   169,     0,   275,    55,    56,     0,    57,     0,
      58,    59,     0,     0,     0,     0,   492,     0,     0,   494,
       0,     0,     0,     0,     0,     0,   498,     0,     0,   499,
       0,    -3,   173,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,   276,   277,
     278,     0,   279,   280,   281,   282,   283,   284,   285,   286,
      -3,    60,    -3,    61,    -3,     2,    -3,   287,    62,     0,
     288,     0,     0,     0,     0,   171,   289,   290,    63,    64,
      65,    66,    67,    68,   169,     0,   275,    55,    56,     0,
      57,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -3,     0,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,
     276,   277,   278,     0,   279,   280,   281,   282,   283,   284,
     285,   286,    -3,    60,    -3,    61,    -3,     2,    -3,   287,
      62,     0,     0,     0,     0,     0,     0,   309,   387,     0,
      63,    64,    65,    66,    67,    68,   169,     0,   275,    55,
      56,     0,    57,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -3,     0,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,     0,   276,   277,   278,     0,   279,   280,   281,   282,
     283,   284,   285,   286,    -3,    60,    -3,    61,    -3,     2,
      -3,   287,    62,     0,     0,     0,     0,     0,     0,   309,
     289,     0,    63,    64,    65,    66,    67,    68,   169,     0,
      54,    55,    56,     0,    57,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -3,     0,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -3,    60,    -3,    61,
      -3,     2,    -3,  -134,    62,     0,     0,     0,  -134,     0,
     170,   171,     0,     0,    63,    64,    65,    66,    67,    68,
     169,     0,    54,    55,    56,     0,    57,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -3,
       0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,     0,     0,     0,    53,     0,
      54,    55,    56,    11,    57,  -118,    58,    59,    -3,    60,
      -3,    61,    -3,     2,    -3,   287,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,    11,     0,  -120,    60,     0,    61,
       0,    37,     0,    38,    62,    39,     0,    40,  -118,  -118,
    -118,  -118,     0,  -118,    63,    64,    65,    66,    67,    68,
       0,     0,     0,    12,  -118,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
     190,     0,    54,    55,    56,    11,    57,  -122,    58,    59,
       0,     0,    37,     0,    38,     0,    39,     0,    40,  -120,
    -120,  -120,  -120,     0,  -120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,  -120,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,    11,     0,  -124,    60,
       0,    61,     0,    37,     0,    38,    62,    39,     0,    40,
    -122,  -122,  -122,  -122,     0,  -122,    63,    64,    65,    66,
      67,    68,     0,     0,     0,    12,  -122,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,    11,     0,  -126,
       0,     0,     0,     0,    37,     0,    38,     0,    39,     0,
      40,  -124,  -124,  -124,  -124,     0,  -124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,  -124,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   117,     0,    54,    55,    56,     0,    57,     0,
      58,    59,     0,     0,     0,    37,     0,    38,     0,    39,
       0,    40,  -126,  -126,  -126,  -126,     0,  -126,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,  -126,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    53,     0,    54,
      55,    56,     0,    57,     0,    58,    59,     0,     0,     0,
       0,    60,    38,    61,     0,     0,     0,     0,    62,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    63,    64,
      65,    66,    67,    68,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
     162,     0,    -2,     0,     0,     0,    60,    38,    61,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    -3,
       0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    53,     0,   275,    55,    56,
       0,    57,     0,    58,    59,     0,     0,     0,    -3,     0,
      -3,     0,    -3,     0,    -3,     0,   450,   340,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    -4,    54,    55,    56,     0,    57,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,   277,   278,     0,   279,   280,   281,   282,   283,
     284,   285,   286,   343,    60,     0,    61,    19,    20,    21,
     287,    62,     0,     0,     0,     0,     0,     0,   309,     0,
       0,    63,    64,    65,    66,    67,    68,     0,     0,    53,
       0,    54,    55,    56,     0,    57,     0,    58,    59,    60,
     267,    61,     0,     0,     0,     0,    62,     0,     0,   344,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,   345,   398,     0,     0,     0,    19,    20,    21,     0,
       0,     0,     0,    53,     0,    54,    55,    56,     0,    57,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,   267,
      61,     0,     0,     0,     0,    62,   418,     0,   399,     0,
      19,    20,    21,     0,     0,    63,    64,    65,    66,    67,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,     0,    57,     0,
      58,    59,    60,   267,    61,     0,     0,     0,     0,    62,
       0,     0,   419,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,   423,     0,     0,     0,    19,
      20,    21,     0,     0,     0,     0,    53,     0,    54,    55,
      56,     0,    57,     0,    58,    59,     0,    54,    55,    56,
       0,    57,     0,    58,    59,     0,     0,     0,     0,     0,
       0,    60,   267,    61,     0,     0,     0,     0,    62,   477,
       0,   424,     0,    19,    20,    21,     0,     0,    63,    64,
      65,    66,    67,   425,    53,     0,    54,    55,    56,     0,
      57,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,   267,    61,     0,     0,
       0,     0,    62,     0,    60,   478,    61,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,   351,     0,
       0,    63,    64,    65,    66,    67,    68,     0,     0,    53,
       0,    54,    55,    56,     0,    57,     0,    58,    59,     0,
       0,     0,     0,    60,     0,    61,     0,     0,     0,  -134,
      62,     0,     0,     0,  -134,     0,   170,   273,     0,     0,
      63,    64,    65,    66,    67,    68,    19,    20,    21,    53,
       0,    54,    55,    56,     0,    57,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,   267,
      61,     0,     0,     0,    53,    62,    54,    55,    56,     0,
      57,     0,    58,    59,     0,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,     0,    57,     0,    58,    59,     0,    60,     0,
      61,     0,     0,     0,     0,    62,     0,   288,     0,     0,
       0,     0,   273,   447,   290,    63,    64,    65,    66,    67,
      68,    53,     0,    54,    55,    56,     0,    57,     0,    58,
      59,     0,     0,    60,     0,    61,     0,     0,     0,     0,
      62,     0,   288,     0,     0,     0,     0,   273,   501,   290,
      63,    64,    65,    66,    67,    68,    60,     0,    61,     0,
       0,     0,     0,    62,     0,   288,     0,     0,     0,     0,
     273,     0,   290,    63,    64,    65,    66,    67,    68,   272,
       0,    54,    55,    56,     0,    57,     0,    58,    59,     0,
      60,     0,    61,     0,     0,     0,     0,    62,   217,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    53,     0,    54,    55,    56,     0,    57,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,     0,    57,     0,    58,    59,     0,     0,    60,     0,
      61,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,   273,     0,     0,    63,    64,    65,    66,    67,
      68,    53,     0,    54,    55,    56,     0,    57,     0,    58,
      59,     0,    60,     0,    61,     0,     0,     0,   376,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    60,     0,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,   273,
       0,     0,    63,    64,    65,    66,    67,    68,    53,     0,
      54,    55,    56,     0,    57,     0,    58,    59,     0,     0,
      60,     0,    61,     0,     0,     0,   287,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    53,     0,    54,    55,    56,     0,    57,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,    54,    55,
      56,     0,    57,     0,    58,    59,     0,    60,     0,    61,
       0,     0,     0,     0,    62,   506,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
     227,     0,    54,    55,    56,     0,    57,     0,    58,    59,
       0,     0,    60,     0,    61,     0,     0,     0,     0,    62,
     508,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    60,     0,    61,     0,     0,
       0,   229,    62,    54,    55,    56,     0,    57,     0,    58,
      59,     0,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,   231,     0,    54,    55,    56,    60,
      57,    61,    58,    59,     0,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,   233,     0,    54,    55,    56,     0,    57,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    61,     0,     0,     0,   235,    62,    54,    55,
      56,     0,    57,     0,    58,    59,     0,    63,    64,    65,
      66,    67,    68,    60,     0,    61,     0,     0,     0,   237,
      62,    54,    55,    56,     0,    57,     0,    58,    59,     0,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,    60,     0,    61,     0,     0,     0,   239,    62,    54,
      55,    56,     0,    57,     0,    58,    59,     0,    63,    64,
      65,    66,    67,    68,     0,    60,     0,    61,     0,     0,
       0,   241,    62,    54,    55,    56,     0,    57,     0,    58,
      59,     0,    63,    64,    65,    66,    67,    68,    60,     0,
      61,     0,     0,     0,   243,    62,    54,    55,    56,     0,
      57,     0,    58,    59,     0,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,    60,     0,    61,     0,
       0,     0,   245,    62,    54,    55,    56,     0,    57,     0,
      58,    59,     0,    63,    64,    65,    66,    67,    68,     0,
      60,     0,    61,     0,     0,     0,   247,    62,    54,    55,
      56,     0,    57,     0,    58,    59,     0,    63,    64,    65,
      66,    67,    68,    60,     0,    61,     0,     0,     0,   249,
      62,    54,    55,    56,     0,    57,     0,    58,    59,     0,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,    60,     0,    61,     0,     0,     0,   251,    62,    54,
      55,    56,     0,    57,     0,    58,    59,     0,    63,    64,
      65,    66,    67,    68,     0,    60,     0,    61,     0,     0,
       0,   253,    62,    54,    55,    56,     0,    57,     0,    58,
      59,     0,    63,    64,    65,    66,    67,    68,    60,     0,
      61,     0,     0,     0,   429,    62,    54,    55,    56,     0,
      57,     0,    58,    59,     0,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,    60,     0,    61,     0,
       0,     0,   431,    62,    54,    55,    56,     0,    57,     0,
      58,    59,     0,    63,    64,    65,    66,    67,    68,     0,
      60,     0,    61,     0,     0,     0,     0,    62,    54,    55,
      56,     0,    57,     0,    58,    59,     0,    63,    64,    65,
      66,    67,    68,    60,     0,    61,     0,     0,     0,     0,
      62,    54,    55,    56,     0,    57,     0,    58,    59,     0,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,    60,     0,    61,     0,    54,    55,    56,    62,    57,
       0,    58,    59,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,     0,    60,     0,    61,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    60,     0,
      61,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     1,    60,     0,    61,     0,     0,     0,     0,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
      -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    51,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -3,
       0,    -3,     0,    -3,     2,    -3,     0,     0,     0,     0,
       0,     0,     0,     0,   309,     0,    -3,     0,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -3,     0,    -3,     0,    -3,
       2,    -3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -3,     0,    -3,     0,    -3,     2,    -3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    37,     0,    38,     0,    39,
       0,    40,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     2,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,   325,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     2,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,   402,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,    38,     0,     0,     2,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,   408,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    38,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38
};

static const yytype_int16 yycheck[] =
{
       3,    62,     0,    10,    41,    99,   101,   123,     6,   211,
     123,    42,    43,    89,   182,   105,   259,    48,    49,    50,
     382,    18,     3,    73,     0,   105,    13,    14,   372,     3,
       6,    76,    78,   178,     3,   179,     1,    77,     3,    42,
      43,     3,   122,     3,   124,    48,    49,    50,   109,   110,
       1,   112,   165,     1,   100,     3,    93,     1,    10,     3,
       1,     3,     1,     1,     3,     3,   210,    99,   161,   130,
       1,    76,     3,    42,    43,   168,   170,    77,     1,    48,
      49,    50,    89,   133,   134,   135,    78,    77,    77,    79,
     151,   181,   182,    79,   100,   100,   209,    83,   442,   443,
      86,   181,   182,   100,    85,    57,    58,    59,   100,    96,
      97,    85,    77,    78,    79,   358,    81,    78,   480,    77,
      81,    73,    84,    99,    84,    76,    98,    92,    76,    77,
      81,   281,    76,    77,    82,    76,    78,    89,    77,    77,
      81,   172,    77,    82,    92,   177,    77,   184,    92,    77,
       1,    79,     3,    92,    92,    78,   324,   270,    81,    77,
      78,    79,   165,    76,    92,   215,    79,    76,    81,   172,
      83,   265,    81,    87,    92,   319,   179,     8,     9,    10,
     178,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   343,
     276,   177,   296,   172,   349,    99,   350,   210,    38,    39,
      40,   209,   288,    76,    81,   365,    81,   367,    81,    81,
      85,    99,    77,    85,    79,   286,    77,    78,    79,    81,
      81,    81,    17,    85,   324,    85,    84,    62,   116,    92,
      93,    71,    95,    77,   324,    79,    77,     3,    79,     3,
     452,   129,   328,    89,    90,    86,   140,   141,   142,   143,
      11,    12,    92,   215,    89,    90,    92,   270,    78,   276,
      78,    81,    78,   389,    78,    81,   389,    81,     3,   423,
       3,   288,    84,   314,     5,   110,   436,   112,   382,    83,
     115,    78,   170,   171,    81,    78,    78,    78,    81,    81,
      81,   179,    78,    15,    16,    81,    78,   368,   369,   370,
      78,   314,    81,    82,    80,    81,   319,    81,    82,    78,
     323,   328,   136,   137,   276,   332,   204,   138,   139,   207,
     406,    78,   210,   483,   484,   485,   288,   450,    78,    78,
     343,   144,   145,    78,   347,   314,    78,   350,    81,   356,
       4,   349,   389,    82,    82,   449,   506,   452,   508,    77,
      77,    77,   512,    77,     3,   515,    76,   517,   405,    76,
       3,    80,    85,    78,    82,    81,   328,    80,    78,    78,
     332,    76,    84,    80,    80,    78,   480,   265,    82,    62,
      76,    80,   395,   391,    56,   273,   372,     3,    80,   406,
      80,    80,    80,    78,   356,    82,    82,    60,    80,    80,
      80,    77,   415,   450,   466,    80,    80,    80,   296,    80,
     423,    80,    80,    80,   427,   486,   487,   488,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    80,    76,
     181,   319,   146,   351,   391,   323,   147,     6,   405,    -1,
     148,   297,   450,   302,   406,    -1,    -1,   149,    -1,   150,
      -1,    -1,    -1,   153,    -1,   343,    -1,    -1,    -1,   347,
      -1,   474,   350,   351,    -1,    -1,   354,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,   395,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,
     418,    -1,    -1,    -1,    -1,   423,    70,    71,    72,   427,
      -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,   449,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,   464,    -1,    -1,   467,
      -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,   477,
      -1,    30,   480,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      79,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
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
       1,    92,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    34,    70,    -1,    72,    38,    39,    40,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    34,    -1,    80,    -1,
      38,    39,    40,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    34,
      -1,    80,    -1,    38,    39,    40,    -1,    -1,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    70,    80,    72,    -1,    -1,    -1,
      -1,    77,    87,    88,    89,    90,    91,    92,    84,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    -1,    -1,
      87,    88,    89,    90,    91,    92,    38,    39,    40,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    90,    91,    92,     1,    -1,
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
      88,    89,    90,    91,    92,    70,    -1,    72,    -1,    -1,
      -1,     1,    77,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    70,
       7,    72,     9,    10,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
#line 2323 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 146 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2329 "parser.tab.c" /* yacc.c:1661  */
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


#line 2459 "parser.tab.c" /* yacc.c:1661  */
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
#line 580 "parser.y" /* yacc.c:1906  */

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
