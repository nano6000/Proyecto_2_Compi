%{
#include "lex.yy.c"	
%}


%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP SHL SHR LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%token SEMICOLON LPARENTHESIS RPARENTHESIS LBRACE RBRACE COMMA COLON
%token EQUALS LBRACKET RBRACKET DOT AMPERSAND EXCLAMATION MINUS PLUS TILDE

%start translation_unit
%%

primary_expression
	: IDENTIFIER
	| constant
	| string
	| LPARENTHESIS expression RPARENTHESIS
	| generic_selection
	;

constant
	: I_CONSTANT		/* includes character_constant */
	| F_CONSTANT
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC LPARENTHESIS assignment_expression COMMA generic_assoc_list RPARENTHESIS
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list COMMA generic_association
	;

generic_association
	: type_name COLON assignment_expression
	| DEFAULT COLON assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression LBRACE expression RBRACE
	| postfix_expression LPARENTHESIS RPARENTHESIS
	| postfix_expression LPARENTHESIS argument_expression_list RPARENTHESIS
	| postfix_expression DOT IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| LPARENTHESIS type_name RPARENTHESIS LBRACKET initializer_list RBRACKET
	| LPARENTHESIS type_name RPARENTHESIS LBRACKET initializer_list COMMA RBRACKET
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LPARENTHESIS type_name RPARENTHESIS
	| ALIGNOF LPARENTHESIS type_name RPARENTHESIS
	;

unary_operator
	: AMPERSAND
	| '*'
	| PLUS
	| MINUS
	| TILDE
	| EXCLAMATION
	;

cast_expression
	: unary_expression
	| LPARENTHESIS type_name RPARENTHESIS cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression SHL additive_expression
	| shift_expression SHR additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression AMPERSAND equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression COLON conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: EQUALS
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression COMMA assignment_expression
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers SEMICOLON
	| declaration_specifiers init_declarator_list SEMICOLON
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list COMMA init_declarator
	;

init_declarator
	: declarator EQUALS initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union LBRACKET struct_declaration_list RBRACKET
	| struct_or_union IDENTIFIER LBRACKET struct_declaration_list RBRACKET
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list SEMICOLON	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list SEMICOLON
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA struct_declarator
	;

struct_declarator
	: COLON constant_expression
	| declarator COLON constant_expression
	| declarator
	;

enum_specifier
	: ENUM LBRACKET enumerator_list RBRACKET
	| ENUM LBRACKET enumerator_list COMMA RBRACKET
	| ENUM IDENTIFIER LBRACKET enumerator_list RBRACKET
	| ENUM IDENTIFIER LBRACKET enumerator_list COMMA RBRACKET
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant EQUALS constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC LPARENTHESIS type_name RPARENTHESIS
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS LPARENTHESIS type_name RPARENTHESIS
	| ALIGNAS LPARENTHESIS constant_expression RPARENTHESIS
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| LPARENTHESIS declarator RPARENTHESIS
	| direct_declarator LBRACE RBRACE
	| direct_declarator LBRACE '*' RBRACE
	| direct_declarator LBRACE STATIC type_qualifier_list assignment_expression RBRACE
	| direct_declarator LBRACE STATIC assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list '*' RBRACE
	| direct_declarator LBRACE type_qualifier_list STATIC assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list RBRACE
	| direct_declarator LBRACE assignment_expression RBRACE
	| direct_declarator LPARENTHESIS parameter_type_list RPARENTHESIS
	| direct_declarator LPARENTHESIS RPARENTHESIS
	| direct_declarator LPARENTHESIS identifier_list RPARENTHESIS
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list COMMA ELLIPSIS
	| parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: LPARENTHESIS abstract_declarator RPARENTHESIS
	| LBRACE RBRACE
	| LBRACE '*' RBRACE
	| LBRACE STATIC type_qualifier_list assignment_expression RBRACE
	| LBRACE STATIC assignment_expression RBRACE
	| LBRACE type_qualifier_list STATIC assignment_expression RBRACE
	| LBRACE type_qualifier_list assignment_expression RBRACE
	| LBRACE type_qualifier_list RBRACE
	| LBRACE assignment_expression RBRACE
	| direct_abstract_declarator LBRACE RBRACE
	| direct_abstract_declarator LBRACE '*' RBRACE
	| direct_abstract_declarator LBRACE STATIC type_qualifier_list assignment_expression RBRACE
	| direct_abstract_declarator LBRACE STATIC assignment_expression RBRACE
	| direct_abstract_declarator LBRACE type_qualifier_list assignment_expression RBRACE
	| direct_abstract_declarator LBRACE type_qualifier_list STATIC assignment_expression RBRACE
	| direct_abstract_declarator LBRACE type_qualifier_list RBRACE
	| direct_abstract_declarator LBRACE assignment_expression RBRACE
	| LPARENTHESIS RPARENTHESIS
	| LPARENTHESIS parameter_type_list RPARENTHESIS
	| direct_abstract_declarator LPARENTHESIS RPARENTHESIS
	| direct_abstract_declarator LPARENTHESIS parameter_type_list RPARENTHESIS
	;

initializer
	: LBRACKET initializer_list RBRACKET
	| LBRACKET initializer_list COMMA RBRACKET
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list COMMA designation initializer
	| initializer_list COMMA initializer
	;

designation
	: designator_list EQUALS
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: LBRACE constant_expression RBRACE
	| DOT IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT LPARENTHESIS constant_expression COMMA STRING_LITERAL RPARENTHESIS SEMICOLON
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER COLON statement
	| CASE constant_expression COLON statement
	| DEFAULT COLON statement
	;

compound_statement
	: LBRACKET RBRACKET
	| LBRACKET  block_item_list RBRACKET
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: SEMICOLON
	| expression SEMICOLON
	;

selection_statement
	: IF LPARENTHESIS expression RPARENTHESIS statement ELSE statement
	| IF LPARENTHESIS expression RPARENTHESIS statement
	| SWITCH LPARENTHESIS expression RPARENTHESIS statement
	;

iteration_statement
	: WHILE LPARENTHESIS expression RPARENTHESIS statement
	| DO statement WHILE LPARENTHESIS expression RPARENTHESIS SEMICOLON
	| FOR LPARENTHESIS expression_statement expression_statement RPARENTHESIS statement
	| FOR LPARENTHESIS expression_statement expression_statement expression RPARENTHESIS statement
	| FOR LPARENTHESIS declaration expression_statement RPARENTHESIS statement
	| FOR LPARENTHESIS declaration expression_statement expression RPARENTHESIS statement
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON
	| CONTINUE SEMICOLON
	| BREAK SEMICOLON
	| RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}