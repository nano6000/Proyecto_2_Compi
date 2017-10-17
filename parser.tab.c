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
    INCLUDE = 356,
    DEFINE = 357,
    CHARACTER = 358,
    SEPARATOR = 359,
    SYSTEM_INCLUDE = 360
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

#line 229 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  476

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   360

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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    38,    39,    40,    44,    48,    49,
      53,    54,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    71,    72,    76,    77,    78,    79,    80,    81,
      82,    86,    87,    88,    89,    90,    91,    95,    96,   100,
     101,   102,   103,   107,   108,   109,   113,   114,   115,   119,
     120,   121,   122,   123,   127,   128,   129,   133,   134,   138,
     139,   143,   144,   148,   149,   153,   154,   158,   159,   163,
     164,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   182,   183,   187,   191,   192,   193,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   210,   211,
     215,   216,   220,   221,   222,   223,   224,   225,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   248,   249,   250,   254,   255,   259,
     260,   264,   265,   266,   270,   271,   272,   273,   277,   278,
     282,   283,   284,   288,   289,   290,   291,   292,   296,   297,
     301,   302,   306,   310,   311,   312,   313,   317,   318,   322,
     323,   327,   328,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   349,   350,   351,
     352,   356,   357,   362,   363,   367,   368,   372,   373,   374,
     378,   379,   383,   384,   388,   389,   390,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   418,   419,
     420,   424,   425,   426,   427,   431,   435,   436,   440,   441,
     445,   449,   450,   451,   452,   453,   454,   458,   459,   460,
     464,   465,   466,   470,   471,   475,   476,   480,   481,   485,
     486,   487,   491,   492,   493,   494,   495,   496,   500,   501,
     502,   503,   504,   508,   509,   513,   514,   518,   519,   523,
     524
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
  "GREATER_THAN", "CARET", "PIPE", "QUESTION_MARK", "INCLUDE", "DEFINE",
  "CHARACTER", "SEPARATOR", "SYSTEM_INCLUDE", "$accept",
  "primary_expression", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
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
     355,   356,   357,   358,   359,   360
};
# endif

#define YYPACT_NINF -329

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-329)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1928,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,    48,   -38,    23,  -329,    65,
    -329,  -329,    31,  2018,  2018,  -329,    54,  -329,  -329,  2018,
    2018,  2018,  -329,  1516,  -329,  -329,   -56,    41,   695,  2090,
     753,  -329,  -329,    73,   138,   -49,  -329,  1773,   208,   156,
    -329,  -329,   -28,   397,  -329,  -329,  -329,  -329,  -329,    41,
      68,   -12,  -329,  -329,  -329,  -329,  1423,  1452,  1452,    77,
      83,   695,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
     162,  -329,   753,  -329,   126,   -69,    55,   135,    33,   106,
     107,   112,   198,     4,  -329,   139,  2090,    -5,  2090,   173,
     186,   159,   193,  -329,  -329,  -329,   138,  -329,    73,  1277,
     460,  -329,    31,  -329,  1828,  1569,   851,   208,   397,  1671,
    -329,    76,  -329,    99,   287,    35,  -329,   695,  -329,   695,
    -329,  -329,  2090,   753,   546,  -329,  -329,    88,   225,   302,
    -329,  -329,   136,   753,   309,  -329,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,  -329,  -329,  1616,   910,   219,
    -329,   222,  -329,  -329,  -329,   308,  -329,  -329,  -329,  -329,
     231,  1253,  -329,  -329,   230,   236,   753,   239,   246,   249,
     250,   811,   253,   329,   257,   259,  1301,  -329,  -329,   -11,
    -329,  -329,  -329,  -329,   550,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,    26,   258,   256,  -329,   121,  1159,
    -329,   260,   262,   954,  1719,  -329,  -329,  -329,   753,    86,
    -329,   261,    37,  -329,  -329,  -329,  -329,   266,   267,   268,
     270,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,   753,  -329,   753,  1324,  -329,  -329,   129,  -329,
     154,  -329,  -329,  -329,  -329,   126,   126,   -69,   -69,    55,
      55,    55,    55,   135,   135,    33,   106,   107,   112,   198,
     178,  -329,   274,   275,  1159,  -329,   280,   281,  1013,   222,
    1881,  1057,   276,   753,   336,  -329,   102,  1277,   -33,  -329,
    -329,   811,   282,   811,   753,   753,   753,   286,   640,   289,
    -329,  -329,  -329,   120,  -329,  -329,  -329,   758,  -329,    96,
    -329,  -329,  1974,  -329,   359,   288,  1159,  -329,  -329,   753,
    -329,   290,   292,  -329,  -329,  -329,    52,   753,  -329,   283,
     283,  -329,  2056,  -329,  -329,  1253,  -329,  -329,   753,  -329,
     753,  -329,  -329,   311,  1159,  -329,  -329,   753,  -329,   312,
    -329,   291,  1159,  -329,   318,   319,  1116,   324,   321,  -329,
    1206,  -329,  -329,  -329,  -329,  -329,   811,  -329,   171,   180,
     188,   326,  1348,  1348,  -329,  -329,  -329,  -329,  -329,  -329,
     327,   328,  -329,  -329,  -329,  -329,   284,   192,  -329,   322,
     119,  -329,  -329,  -329,   330,   331,  -329,  -329,   334,  1159,
    -329,  -329,   753,  -329,   335,  -329,  -329,  -329,  -329,  1277,
    -329,   811,   811,   811,   753,  1376,  1400,  -329,  -329,   753,
    -329,  2056,   753,  1230,  -329,  -329,  -329,  -329,   337,   338,
    -329,  -329,   346,  -329,  -329,   194,   811,   202,   811,   211,
    -329,  -329,  -329,  -329,  -329,  -329,   811,   333,  -329,   811,
    -329,   811,  -329,  -329,  -329,  -329
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   123,   102,   103,   104,   106,   107,   157,   153,   154,
     155,   117,   109,   110,   111,   112,   115,   116,   113,   114,
     108,   118,   119,   127,   128,     0,     0,   156,   158,     0,
     105,   266,     0,    89,    91,   121,     0,   122,   120,    93,
      95,    97,    87,     0,   263,   265,   147,     0,     0,     0,
       0,   163,    85,     0,   180,     0,    98,   101,   162,     0,
      88,    90,   126,     0,    92,    94,    96,     1,   264,     0,
     150,     0,   148,     2,     3,     4,     0,     0,     0,     0,
       0,     0,    31,    36,    34,    33,    35,    32,    12,     6,
      24,    37,     0,    39,    43,    46,    49,    54,    57,    59,
      61,    63,    65,    67,    84,     0,   135,   193,   137,     0,
       0,     0,     0,   156,   181,   179,   178,    86,     0,     0,
       0,   269,     0,   268,     0,     0,     0,   161,     0,     0,
     129,     0,   133,     0,     0,     0,   143,     0,    28,     0,
      25,    26,     0,     0,    37,    69,    82,     0,     0,     0,
      18,    19,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,   134,     0,     0,   195,
     192,   196,   136,   159,   152,     0,   164,   182,   177,    99,
     101,     0,   220,   100,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,   240,     0,
     245,   246,   231,   232,     0,   243,   233,   234,   235,   236,
     270,   267,   190,   175,   189,     0,   184,   185,     0,     0,
     165,    32,     0,     0,     0,   124,   130,   131,     0,     0,
     138,   142,     0,   145,   151,   144,   149,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    71,     0,     5,     0,     0,    17,    14,     0,    22,
       0,    16,    40,    41,    42,    45,    44,    47,    48,    52,
      53,    50,    51,    55,    56,    58,    60,    62,    64,    66,
       0,   214,     0,     0,     0,   198,    32,     0,     0,   194,
       0,     0,     0,     0,     0,   222,     0,     0,     0,   226,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,   260,   261,     0,   248,   241,   244,     0,   187,   195,
     188,   174,     0,   176,     0,     0,     0,   166,   173,     0,
     172,    32,     0,   125,   140,   132,     0,     0,   146,    29,
       0,    30,     0,    70,    83,     0,    38,    15,     0,    13,
       0,   215,   197,     0,     0,   199,   205,     0,   204,     0,
     216,     0,     0,   206,    32,     0,     0,     0,     0,   229,
       0,   218,   221,   225,   227,   237,     0,   239,     0,     0,
       0,     0,     0,     0,   258,   262,   183,   186,   191,   168,
       0,     0,   169,   171,   139,   141,     0,     0,     8,     0,
       0,    23,    68,   201,     0,     0,   203,   217,     0,     0,
     207,   213,     0,   212,     0,   230,   228,   219,   224,     0,
     238,     0,     0,     0,     0,     0,     0,   167,   170,     0,
       7,     0,     0,     0,    20,   200,   202,   209,     0,     0,
     210,   223,   250,   251,   252,     0,     0,     0,     0,     0,
      11,     9,    10,    21,   208,   211,     0,     0,   256,     0,
     254,     0,   249,   253,   257,   255
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,  -329,   -25,  -329,  -329,   217,  -329,   -45,
      84,   117,    91,   143,   251,   254,   252,   285,   255,  -329,
     -40,   -17,  -329,   -78,   -41,   -32,     2,  -329,   313,  -329,
     -44,  -329,  -329,   305,  -103,     8,  -329,   108,  -329,   361,
    -117,  -329,   -48,  -329,  -329,   -21,   -47,   -30,   -72,  -111,
    -329,   124,  -329,   -18,   -91,  -166,  -112,    98,  -328,  -329,
     150,   -46,   -37,  -329,   -34,  -329,   245,  -201,  -329,  -329,
    -329,  -329,   417,  -329,  -329
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,   407,   408,    90,   268,   144,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     145,   146,   262,   209,   105,    31,   122,    55,    56,    33,
      34,    35,    36,   129,   130,   107,   239,   240,    37,    71,
      72,    38,    39,    40,    41,   112,    58,    59,   116,   292,
     226,   227,   228,   409,   293,   181,   305,   306,   307,   308,
     309,    42,   211,   212,   213,   214,   215,   216,   217,   218,
     219,    43,    44,    45,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     108,   108,    32,   147,   106,   106,   114,   193,   104,   111,
     104,    57,   127,   299,   225,   108,   180,   132,   246,   106,
     159,   160,   173,   123,   115,   121,   236,   117,    69,    51,
     109,   110,   118,   108,    51,    60,    61,   106,    70,    48,
      70,    64,    65,    66,    70,    32,   303,   155,   167,   168,
     383,    46,   429,   304,   233,    51,   128,    62,   108,   147,
     108,   147,   106,   148,   106,   324,   161,   162,   187,   135,
     264,   131,   177,   136,   178,   270,    51,   179,   114,    51,
     108,   108,   132,   132,   106,   106,   188,    54,   210,   108,
     221,   108,   220,   106,   108,   106,   290,   190,   106,    51,
      49,   190,   192,   327,   174,   178,   298,    52,    53,   232,
     241,   272,   273,   274,   176,   429,   182,   393,    54,   247,
     245,   248,   348,    54,   249,   246,   250,   224,   323,    53,
     114,   236,    47,   330,   238,   269,   131,   131,    63,    73,
      74,    75,    50,    76,    54,    77,    78,   179,   163,   164,
      53,   134,   237,    53,   142,   312,   104,   336,   238,    51,
     143,   297,   345,   299,   317,    54,   263,   346,    54,   264,
     149,   150,   151,   327,   192,   178,     8,     9,    10,   224,
     242,   114,   210,   380,   243,   187,   108,   381,   132,   371,
     106,   435,   436,   169,   329,   382,   395,   344,   104,   333,
     443,   264,   334,   328,   444,   170,    79,   357,    80,   113,
     358,   171,   335,    81,   267,   172,   342,   175,   156,   157,
     356,   158,   364,    82,    83,    84,    85,    86,    87,   376,
      54,   165,   166,    53,   359,   264,   388,   389,   390,   152,
     185,   153,   131,   275,   276,   353,   114,   354,   154,   431,
     187,   183,   264,   114,   279,   280,   281,   282,   432,   264,
     360,   264,   378,   104,   184,    91,   433,    91,   428,   264,
     440,   186,   467,   441,   385,   264,   387,   363,   277,   278,
     469,   369,   127,   264,   375,   125,   392,   126,   187,   471,
     192,   244,   264,   138,   140,   141,   177,   329,   178,   300,
     419,   301,   224,   265,   108,   266,   405,   104,   106,    91,
     283,   284,   271,   302,   119,   310,   187,   451,   311,   400,
     412,   313,   401,   314,   114,   241,   315,   316,   187,   224,
     318,   428,   319,   320,   224,   321,   331,   332,   192,   379,
     337,   411,   338,   347,   349,   350,   351,   414,   391,   430,
     415,   352,   361,   362,   377,   418,   455,   457,   459,   424,
     365,   366,   398,   192,   386,   394,   439,   355,   399,   417,
     402,   187,   403,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,   413,   416,   108,   452,   453,   454,   106,   420,   421,
     425,   426,   448,   434,   442,   449,   466,   437,   438,   473,
     445,   446,   192,    91,   447,   450,   461,   464,   465,   468,
     285,   470,   460,   287,   286,   462,   192,     1,   289,   472,
     133,   189,   474,   234,   475,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   410,   404,    91,   397,   288,   384,   326,
      68,   194,     0,   195,    74,    75,     0,    76,    27,    77,
      78,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   196,   197,   198,
      91,   199,   200,   201,   202,   203,   204,   205,   206,    26,
      79,    27,    80,    28,    29,    30,   207,    81,     0,     0,
       0,     0,     0,     0,   120,   208,     0,    82,    83,    84,
      85,    86,    87,   195,    74,    75,     0,    76,     0,    77,
      78,     0,     0,     0,    91,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,    91,     0,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   196,   197,   198,
       0,   199,   200,   201,   202,   203,   204,   205,   206,    26,
      79,    27,    80,    28,    29,    30,   207,    81,     0,   261,
       0,     0,     0,     0,   120,   325,     0,    82,    83,    84,
      85,    86,    87,    73,    74,    75,     0,    76,     0,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    73,    74,
      75,     0,    76,     0,    77,    78,     0,     0,     0,    26,
      79,    27,    80,    28,    29,    30,   207,    81,     0,     0,
       0,     0,     0,     0,     0,     1,     0,    82,    83,    84,
      85,    86,    87,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,    73,    74,    75,     0,
      76,    51,    77,    78,     0,    79,    27,    80,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   195,    74,    75,     0,    76,     0,
      77,    78,     0,    79,     0,    80,     0,    26,     0,    27,
      81,    28,     0,    30,     0,   327,   291,   178,     0,     0,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
      54,     0,     0,     0,    73,    74,    75,     0,    76,     0,
      77,    78,     0,     0,     0,     0,     0,     0,   196,   197,
     198,     0,   199,   200,   201,   202,   203,   204,   205,   206,
       0,    79,     0,    80,     0,   229,     0,   207,    81,     8,
       9,    10,     0,     0,     0,   120,     0,     0,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,     0,    76,     0,    77,
      78,    79,   113,    80,     0,     0,     0,     0,    81,     0,
       0,   230,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,   231,   294,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    73,    74,    75,
       0,    76,     0,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,   113,    80,     0,     0,     0,     0,    81,   339,     0,
     295,     0,     8,     9,    10,     0,     0,    82,    83,    84,
      85,    86,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,     0,
      76,     0,    77,    78,    79,   113,    80,     0,     0,     0,
       0,    81,     0,     0,   340,     0,     0,     0,     0,     0,
       0,    82,    83,    84,    85,    86,   341,   367,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      73,    74,    75,     0,    76,     0,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,   113,    80,     0,     0,     0,     0,
      81,   372,     0,   368,     0,     8,     9,    10,     0,     0,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,     0,    76,     0,    77,    78,    79,   113,    80,
       0,     0,     0,     0,    81,     0,     0,   373,     0,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,   374,
     422,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,    73,    74,    75,     0,    76,     0,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,   113,    80,     0,
       0,     0,     0,    81,     0,     0,   423,     8,     9,    10,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    73,
      74,    75,     0,    76,     0,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
     113,    80,     0,    73,    74,    75,    81,    76,     0,    77,
      78,     0,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,    73,    74,    75,     0,
      76,     0,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,    80,     0,
      73,    74,    75,    81,    76,   303,    77,    78,     0,     0,
     191,   427,   304,    82,    83,    84,    85,    86,    87,     0,
      79,     0,    80,     0,    73,    74,    75,    81,    76,   303,
      77,    78,     0,     0,   191,   463,   304,    82,    83,    84,
      85,    86,    87,    79,     0,    80,     0,    73,    74,    75,
      81,    76,   303,    77,    78,     0,     0,   191,     0,   304,
      82,    83,    84,    85,    86,    87,     0,    79,     0,    80,
       0,    73,    74,    75,    81,    76,     0,    77,    78,     0,
       0,   191,     0,     0,    82,    83,    84,    85,    86,    87,
       0,    79,     0,    80,     0,     0,     0,   322,    81,    73,
      74,    75,     0,    76,     0,    77,    78,     0,    82,    83,
      84,    85,    86,    87,    79,     0,    80,     0,     0,     0,
       0,    81,     0,    73,    74,    75,     0,    76,   355,    77,
      78,    82,    83,    84,    85,    86,    87,     0,    79,     0,
      80,     0,     0,     0,   207,    81,    73,    74,    75,     0,
      76,     0,    77,    78,     0,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,    79,     0,    80,     0,
       0,     0,     0,    81,   456,    73,    74,    75,     0,    76,
       0,    77,    78,    82,    83,    84,    85,    86,    87,     0,
      79,     0,    80,     0,     0,     0,     0,    81,   458,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    79,     0,    80,     0,     0,     0,     0,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    67,     0,     0,     0,
       0,     0,    79,     0,    80,     0,     0,     0,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,     0,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     0,     1,   223,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,     0,   177,   291,   178,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,    54,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,   235,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   343,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     1,   120,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     0,     1,   370,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     1,    30,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    26,     0,    27,
       0,    28,     0,    30,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,   406,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,    27,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,     0,    81,    48,    49,    54,   119,    48,    50,
      50,    32,    59,   179,   125,    63,   107,    63,   135,    63,
      89,    90,    18,    57,    54,    57,   129,    76,    84,     3,
      48,    49,    81,    81,     3,    33,    34,    81,     3,    77,
       3,    39,    40,    41,     3,    43,    79,    92,    15,    16,
      83,     3,   380,    86,   126,     3,    84,     3,   106,   137,
     108,   139,   106,    81,   108,    76,    11,    12,   116,    81,
      81,    63,    77,    85,    79,   153,     3,   107,   126,     3,
     128,   129,   128,   129,   128,   129,   116,    92,   120,   137,
     124,   139,   124,   137,   142,   139,   174,   118,   142,     3,
      77,   122,   119,    77,   100,    79,   178,    76,    77,   126,
     131,   156,   157,   158,   106,   443,   108,   318,    92,   137,
      85,   139,    85,    92,   142,   242,   143,   125,   206,    77,
     178,   234,    84,   224,    82,   152,   128,   129,    84,     3,
       4,     5,    77,     7,    92,     9,    10,   177,    13,    14,
      77,    83,    76,    77,    77,   196,   196,   229,    82,     3,
      77,   178,    76,   329,   201,    92,    78,    81,    92,    81,
       8,     9,    10,    77,   191,    79,    38,    39,    40,   177,
      81,   229,   214,    81,    85,   233,   234,    85,   234,   300,
     234,   392,   393,    87,   224,   307,    76,   238,   238,    78,
      81,    81,    81,   224,    85,    98,    70,    78,    72,    71,
      81,    99,   229,    77,    78,    17,   233,    78,    92,    93,
     265,    95,   294,    87,    88,    89,    90,    91,    92,   301,
      92,    96,    97,    77,    80,    81,   314,   315,   316,    77,
      81,    79,   234,   159,   160,   262,   294,   264,    86,    78,
     298,    78,    81,   301,   163,   164,   165,   166,    78,    81,
      82,    81,   303,   303,    78,    48,    78,    50,   380,    81,
      78,    78,    78,    81,   311,    81,   313,   294,   161,   162,
      78,   298,   329,    81,   301,    77,   318,    79,   336,    78,
     307,     4,    81,    76,    77,    78,    77,   327,    79,    77,
     372,    79,   300,    78,   352,     3,   347,   347,   352,    92,
     167,   168,     3,     5,    83,    85,   364,   429,    82,   336,
     360,    82,   339,    77,   372,   346,    77,    77,   376,   327,
      77,   443,     3,    76,   332,    76,    78,    81,   355,     3,
      80,   358,    80,    82,    78,    78,    78,   364,    62,   386,
     367,    81,    78,    78,    78,   372,   434,   435,   436,   376,
      80,    80,     3,   380,    82,    76,    82,    84,    80,    78,
      80,   419,    80,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,    80,    80,   441,   431,   432,   433,   441,    80,    80,
      76,    80,   419,    77,    82,   422,    60,    80,    80,    76,
      80,    80,   429,   196,    80,    80,   441,    80,    80,   456,
     169,   458,   439,   171,   170,   442,   443,    30,   173,   466,
      69,   118,   469,   128,   471,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   355,   346,   238,   332,   172,   308,   214,
      43,     1,    -1,     3,     4,     5,    -1,     7,    71,     9,
      10,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
     303,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    87,    88,    89,
      90,    91,    92,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,   347,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,   360,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    83,
      -1,    -1,    -1,    -1,    84,    85,    -1,    87,    88,    89,
      90,    91,    92,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    87,    88,    89,
      90,    91,    92,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     3,     9,    10,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    70,    -1,    72,    -1,    69,    -1,    71,
      77,    73,    -1,    75,    -1,    77,    78,    79,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    34,    -1,    76,    77,    38,
      39,    40,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    34,    -1,
      80,    -1,    38,    39,    40,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    34,    -1,    80,    -1,    38,    39,    40,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    38,    39,    40,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,     3,     4,     5,    77,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
       3,     4,     5,    77,     7,    79,     9,    10,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      70,    -1,    72,    -1,     3,     4,     5,    77,     7,    79,
       9,    10,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    70,    -1,    72,    -1,     3,     4,     5,
      77,     7,    79,     9,    10,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    -1,    70,    -1,    72,
      -1,     3,     4,     5,    77,     7,    -1,     9,    10,    -1,
      -1,    84,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    87,    88,
      89,    90,    91,    92,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,     3,     4,     5,    -1,     7,    84,     9,
      10,    87,    88,    89,    90,    91,    92,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    78,     3,     4,     5,    -1,     7,
      -1,     9,    10,    87,    88,    89,    90,    91,    92,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     0,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    30,    78,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    92,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    85,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    30,    78,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,    75,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    69,    -1,    71,
      -1,    73,    -1,    75,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   131,   132,   135,   136,   137,   138,   144,   147,   148,
     149,   150,   167,   177,   178,   179,     3,    84,    77,    77,
      77,     3,    76,    77,    92,   133,   134,   151,   152,   153,
     132,   132,     3,    84,   132,   132,   132,     0,   178,    84,
       3,   145,   146,     3,     4,     5,     7,     9,    10,    70,
      72,    77,    87,    88,    89,    90,    91,    92,   107,   108,
     111,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   130,   136,   141,   148,   159,
     159,   130,   151,    71,   148,   153,   154,    76,    81,    83,
      84,   131,   132,   170,   180,    77,    79,   152,    84,   139,
     140,   141,   167,   145,    83,    81,    85,    77,   113,    77,
     113,   113,    77,    77,   113,   126,   127,   129,   159,     8,
       9,    10,    77,    79,    86,   115,    92,    93,    95,    89,
      90,    11,    12,    13,    14,    96,    97,    15,    16,    87,
      98,    99,    17,    18,   100,    78,   141,    77,    79,   153,
     160,   161,   141,    78,    78,    81,    78,   148,   153,   134,
     151,    84,   127,   162,     1,     3,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    68,    76,    85,   129,
     131,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     131,   170,     3,    78,   132,   155,   156,   157,   158,    34,
      80,    92,   127,   154,   139,    85,   140,    76,    82,   142,
     143,   151,    81,    85,     4,    85,   146,   159,   159,   159,
     127,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    83,   128,    78,    81,    78,     3,    78,   112,   127,
     129,     3,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   118,   119,   119,   120,   121,   122,   123,   124,
     129,    78,   155,   160,    34,    80,    92,   127,   154,   161,
      77,    79,     5,    79,    86,   162,   163,   164,   165,   166,
      85,    82,   130,    82,    77,    77,    77,   168,    77,     3,
      76,    76,    76,   129,    76,    85,   172,    77,   151,   153,
     160,    78,    81,    78,    81,   127,   154,    80,    80,    34,
      80,    92,   127,    85,   130,    76,    81,    82,    85,    78,
      78,    78,    81,   127,   127,    84,   115,    78,    81,    80,
      82,    78,    78,   127,   154,    80,    80,    34,    80,   127,
      78,   155,    34,    80,    92,   127,   154,    78,   130,     3,
      81,    85,   162,    83,   166,   168,    82,   168,   129,   129,
     129,    62,   131,   173,    76,    76,    56,   157,     3,    80,
     127,   127,    80,    80,   143,   130,    58,   109,   110,   159,
     163,   127,   126,    80,   127,   127,    80,    78,   127,   154,
      80,    80,    34,    80,   127,    76,    80,    85,   162,   164,
     168,    78,    78,    78,    77,   173,   173,    80,    80,    82,
      78,    81,    82,    81,    85,    80,    80,    80,   127,   127,
      80,   162,   168,   168,   168,   129,    78,   129,    78,   129,
     127,   110,   127,    85,    80,    80,    60,    78,   168,    78,
     168,    78,   168,    76,   168,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   107,   107,   107,   108,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   119,   119,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   142,   142,
     143,   143,   143,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     158,   158,   159,   159,   160,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162,
     162,   163,   163,   163,   163,   164,   165,   165,   166,   166,
     167,   168,   168,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   174,   175,   175,   175,   175,   175,   175,   176,   176,
     176,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     6,     1,     3,
       3,     3,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     3,     1,     4,     5,     5,     6,     2,     1,     3,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     4,
       4,     2,     1,     1,     3,     3,     4,     6,     5,     5,
       6,     5,     4,     4,     4,     3,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     1,     3,     2,     2,     1,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     3,     4,
       1,     2,     1,     4,     3,     2,     1,     2,     3,     2,
       7,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     1,     2,     1,     1,     1,     2,     7,
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
        case 242:
#line 466 "parser.y" /* yacc.c:1661  */
    { yyclearin; }
#line 2023 "parser.tab.c" /* yacc.c:1661  */
    break;


#line 2027 "parser.tab.c" /* yacc.c:1661  */
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
#line 527 "parser.y" /* yacc.c:1906  */

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
	            printf("%s in line: %i\n-->  %s\n", s, yylineno, line);
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
