%{
#include "lex.yy.c"
#include "compiler.h"
void yyerror(const char *s);


%}


%token	CONSTANT STRING FUNC_NAME SIZEOF
%token	PTR_OP        
%token	  MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%token SEMICOLON LPARENTHESIS RPARENTHESIS LBRACE RBRACE COMMA COLON
%token EQUALS LBRACKET RBRACKET DOT  EXCLAMATION TILDE
%token   BACKSLASH    CARET  QUESTION_MARK
%token CHARACTER SEPARATOR QOUTE

%token <string> ID 
%token <string> PLUS
%token <string> MINUS
%token <string> STAR
%token <string> SLASH
%token <string> MODULO
%token <string> LESS_THAN
%token <string> GREATER_THAN
%token <string> AMPERSAND
%token <string> SHL
%token <string> SHR
%token <string> LE_OP
%token <string> GE_OP
%token <string> EQ_OP
%token <string> NE_OP
%token <string> AND_OP
%token <string> OR_OP
%token <string> PIPE
%token <string> INC_OP
%token <string> DEC_OP

%start translation_unit
%define parse.error verbose

%union {
  int      value;
  char     *string;
}

%%


saveType
	: %empty { saveTypeAS(yytext);}
	;

save_pointer
	: %empty { savePointerAS();}

primary_expression
	: ID { process_id($1); }
	| { process_literal(yytext); } CONSTANT
	| STRING
	| LPARENTHESIS expression RPARENTHESIS
	| LPARENTHESIS expression error { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
	| LPARENTHESIS error RPARENTHESIS { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
	| generic_selection
	;

generic_selection
	: GENERIC LPARENTHESIS assignment_expression COMMA generic_assoc_list RPARENTHESIS
	| GENERIC LPARENTHESIS error RPARENTHESIS { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list COMMA generic_association
	;

generic_association
	: type_name COLON assignment_expression
	| DEFAULT COLON assignment_expression
	;

postfix_expression2
  : RBRACKET {closeContext();}
  | COMMA RBRACKET {closeContext();}
  ;

postfix_expression
	: primary_expression
	| postfix_expression LBRACE expression RBRACE
	| postfix_expression LPARENTHESIS RPARENTHESIS
	| postfix_expression LPARENTHESIS argument_expression_list RPARENTHESIS
	| postfix_expression DOT ID
	| postfix_expression PTR_OP ID
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| LPARENTHESIS type_name RPARENTHESIS LBRACKET {openNewContext();} initializer_list postfix_expression2
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA assignment_expression
	| argument_expression_list COMMA error { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
	;

unary_expression
	: postfix_expression
	| INC_OP { process_op($1); } unary_expression {eval_unary();}
	| DEC_OP { process_op($1); } unary_expression {eval_unary();}
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LPARENTHESIS type_name RPARENTHESIS
	| ALIGNOF LPARENTHESIS type_name RPARENTHESIS
	;

unary_operator
	: AMPERSAND
	| STAR
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
	| multiplicative_expression STAR { process_op($2); }  cast_expression { eval_binary(); }
	| multiplicative_expression SLASH { process_op($2); } cast_expression { eval_binary(); }
	| multiplicative_expression MODULO { process_op($2); } cast_expression { eval_binary(); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS { process_op($2); } multiplicative_expression { eval_binary(); }
	| additive_expression PLUS error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| additive_expression MINUS { process_op($2); } multiplicative_expression { eval_binary(); }
	| additive_expression MINUS error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

shift_expression
	: additive_expression
	| shift_expression SHL additive_expression
	| shift_expression SHR additive_expression
	| shift_expression SHL error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| shift_expression SHR error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

relational_expression
	: shift_expression
	| relational_expression LESS_THAN shift_expression
	| relational_expression GREATER_THAN shift_expression
	| relational_expression LESS_THAN error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| relational_expression GREATER_THAN error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	| relational_expression LE_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| relational_expression GE_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	| equality_expression EQ_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	| equality_expression NE_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

and_expression
	: equality_expression
	| and_expression AMPERSAND equality_expression
	| and_expression AMPERSAND error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression CARET and_expression
	| exclusive_or_expression CARET error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression PIPE exclusive_or_expression
	| inclusive_or_expression PIPE error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	| logical_and_expression AND_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	| logical_or_expression OR_OP error { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression QUESTION_MARK expression COLON conditional_expression
	| logical_or_expression QUESTION_MARK expression COLON error { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
	| error QUESTION_MARK expression COLON conditional_expression { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
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


declaration2
	: SEMICOLON
	| error { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
	| init_declarator_list {declaration_end();} SEMICOLON
	| init_declarator_list error { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
	| error SEMICOLON { yyerrok;}
	;


declaration
	: saveType declaration_specifiers declaration2
	| error SEMICOLON { yyerrok; }
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
	| error {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
	;


init_declarator_list
	: init_declarator
	| init_declarator_list COMMA init_declarator
	| error COMMA init_declarator { printf("Expresion invalida antes de ','\n\n"); }
	;

init_declarator
	: declarator EQUALS initializer
	| declarator EQUALS error { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
	| declarator initializer { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* IDs must be flagged as TYPEDEF_NAME */
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
	: struct_or_union LBRACKET {openNewContext();} struct_declaration_list RBRACKET {closeContext();}
	| struct_or_union ID LBRACKET {openNewContext();} struct_declaration_list RBRACKET {closeContext();}
	| struct_or_union ID
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

enum_specifier2
  : RBRACKET {closeContext();}
  | COMMA RBRACKET {closeContext();}
  ;


enum_specifier
	: ENUM LBRACKET {openNewContext();} enumerator_list enum_specifier2
	| ENUM ID LBRACKET {openNewContext();} enumerator_list enum_specifier2
	| ENUM ID
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator	/* IDs must be flagged as ENUMERATION_CONSTANT */
	: ID
	| ID EQUALS CONSTANT
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



direct_declarator2
  : parameter_type_list RPARENTHESIS
  | RPARENTHESIS
  | ID_list RPARENTHESIS

direct_declarator
	: ID {saveIDAS($1);}
	| error { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
	| LPARENTHESIS declarator RPARENTHESIS {printf("Here's a ( declarator  )\n");}
	| direct_declarator LBRACE RBRACE
	| direct_declarator LBRACE STAR RBRACE
	| direct_declarator LBRACE STATIC type_qualifier_list assignment_expression RBRACE
	| direct_declarator LBRACE STATIC assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list STAR RBRACE
	| direct_declarator LBRACE type_qualifier_list STATIC assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list assignment_expression RBRACE
	| direct_declarator LBRACE type_qualifier_list RBRACE
	| direct_declarator LBRACE assignment_expression RBRACE
	| direct_declarator LPARENTHESIS { POP(getSemanticStack());} direct_declarator2
	;

pointer
	: save_pointer STAR type_qualifier_list pointer
	| save_pointer STAR type_qualifier_list
	| save_pointer STAR pointer
	| save_pointer STAR
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
	: saveType declaration_specifiers declarator {declaration_end();}
	| saveType declaration_specifiers abstract_declarator {declaration_end();}
	| saveType declaration_specifiers {declaration_end();}
	;


ID_list
	:  ID
	|  ID_list COMMA ID
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
	| LBRACE STAR RBRACE
	| LBRACE STATIC type_qualifier_list assignment_expression RBRACE
	| LBRACE STATIC assignment_expression RBRACE
	| LBRACE type_qualifier_list STATIC assignment_expression RBRACE
	| LBRACE type_qualifier_list assignment_expression RBRACE
	| LBRACE type_qualifier_list RBRACE
	| LBRACE assignment_expression RBRACE
	| direct_abstract_declarator LBRACE RBRACE
	| direct_abstract_declarator LBRACE STAR RBRACE
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

initializer2
  : RBRACKET {closeContext();}
  | COMMA RBRACKET {closeContext();}
  ;

initializer
	: LBRACKET {openNewContext();} initializer2
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
	| DOT ID
	;

static_assert_declaration
	: STATIC_ASSERT LPARENTHESIS constant_expression COMMA STRING RPARENTHESIS SEMICOLON
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
	: ID COLON statement
	| CASE constant_expression COLON statement
	| DEFAULT COLON statement
	;

compound_statement
	: LBRACKET {openNewContext();} RBRACKET {closeContext();}
	| LBRACKET {openNewContext();}  block_item_list RBRACKET {closeContext();}
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
	| expression error { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
	| error SEMICOLON { printf("Linea: %i. Expresion invalida.\n\n", yylineno); yyerrok; }
	;

selection_statement
	: IF LPARENTHESIS expression RPARENTHESIS { inicio_if(); } statement { inicio_else(); } else_block { fin_if(); }
	| SWITCH LPARENTHESIS expression RPARENTHESIS statement
	;

else_block
	: ELSE statement
	| %empty
	;

iteration_statement
	: WHILE { inicio_while(); } LPARENTHESIS expression RPARENTHESIS { eval_while(); } statement {fin_while();}
	| DO { inicio_DOwhile(); } statement WHILE LPARENTHESIS expression RPARENTHESIS { eval_DOwhile(); } SEMICOLON { fin_DOwhile(); }
	| FOR LPARENTHESIS expression_statement expression_statement RPARENTHESIS statement
	| FOR LPARENTHESIS expression_statement expression_statement expression RPARENTHESIS statement
	| FOR LPARENTHESIS declaration expression_statement RPARENTHESIS statement
	| FOR LPARENTHESIS declaration expression_statement expression RPARENTHESIS statement
	;

jump_statement
	: GOTO ID SEMICOLON
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
function_definition2
  : declarator declaration_list compound_statement
  | declarator compound_statement


function_definition
	: declaration_specifiers function_definition2
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
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
