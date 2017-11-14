%{
#include <string.h>
#include "parser.tab.h"
void imprimirLinea();
%}
%option yylineno


FS  (f|F|l|L)
IS  (((u|U)(l|L)?)|((l|L)(u|U)?))

ID		    	[_a-zA-Z][_a-zA-Z0-9]*
STRING		    \"(\\.|[^\\"])*\"
CHARACTER    	'(\\.|.)+'

OCTAL  			[0-7]
DECIMAL   		[0-9]
NON_ZERO		[1-9]
HEXADECIMAL		[a-fA-F0-9]

HEX_PREFIX 		(0[xX])
EXPONENT	    ([Ee][+-]?{DECIMAL}+)
P  				([Pp][+-]?{DECIMAL}+)

COMMENT		    ("/*"[^*]*[*]+([^/*][^*]*[*]+)*[/])|"//".*

%%


"auto"					return AUTO;
"break"					return BREAK;
"case"					return CASE;
"char"					return CHAR;
"const"					return CONST;
"continue"				return CONTINUE;
"default"				return DEFAULT;
"do"					return DO;
"double"				return DOUBLE;
"else"					return ELSE;
"enum"					return ENUM;
"extern"				return EXTERN;
"float"					return FLOAT;
"for"					return FOR;
"goto"					return GOTO;
"if"					return IF;
"inline"				return INLINE;
"int"					return INT;
"long"					return LONG;
"register"				return REGISTER;
"restrict"				return RESTRICT;
"return"				return RETURN;
"short"					return SHORT;
"signed"				return SIGNED;
"sizeof"				return SIZEOF;
"static"				return STATIC;
"struct"				return STRUCT;
"switch"				return SWITCH;
"typedef"				return TYPEDEF;
"union"					return UNION;
"unsigned"				return UNSIGNED;
"void"					return VOID;
"volatile"				return VOLATILE;
"while"					return WHILE;
"_Alingas"				return ALIGNAS;
"_Alignof"				return ALIGNOF;
"_Atomic"				return ATOMIC;
"_Bool"					return BOOL;
"_Complex"              return COMPLEX;
"_Generic"              return GENERIC;
"_Imaginary"            return IMAGINARY;
"_Noreturn"             return NORETURN;
"_Static_assert"        return STATIC_ASSERT;
"_Thread_local"         return THREAD_LOCAL;
"__func__"              return FUNC_NAME;

"..."					return ELLIPSIS;
">>="					return RIGHT_ASSIGN;
"<<="					return LEFT_ASSIGN;
"+="					return ADD_ASSIGN;
"-="					return SUB_ASSIGN;
"*="					return MUL_ASSIGN;
"/="					return DIV_ASSIGN;
"%="					return MOD_ASSIGN;
"&="					return AND_ASSIGN;
"^="					return XOR_ASSIGN;
"|="					return OR_ASSIGN;
">>"					yylval.string = strdup(yytext); return SHL;
"<<"					yylval.string = strdup(yytext); return SHR;
"++"					yylval.string = strdup(yytext); return INC_OP;
"--"					yylval.string = strdup(yytext); return DEC_OP;
"->"					return PTR_OP;
"&&"					yylval.string = strdup(yytext); return AND_OP;
"||"					yylval.string = strdup(yytext); return OR_OP;
"<="					yylval.string = strdup(yytext); return LE_OP;
">="					yylval.string = strdup(yytext); return GE_OP;
"=="					yylval.string = strdup(yytext); return EQ_OP;
"!="					yylval.string = strdup(yytext); return NE_OP;
";"						return SEMICOLON;
"{"						return LBRACKET;
"}"						return RBRACKET;
","						return COMMA;
":"						return COLON;
"="						return EQUALS;
"("						return LPARENTHESIS;
")"						return RPARENTHESIS;
"["						return LBRACE;
"]"						return RBRACE;
"."						return DOT;
"&"						yylval.string = strdup(yytext); return AMPERSAND;
"!"						return EXCLAMATION;
"~"						return TILDE;
"-"						yylval.string = strdup(yytext); return MINUS;
"+"						yylval.string = strdup(yytext); return PLUS;
"*"						yylval.string = strdup(yytext); return STAR;
"/"						yylval.string = strdup(yytext); return SLASH;
"\\"					return BACKSLASH;
"%"						yylval.string = strdup(yytext); return MODULO;
"<"						yylval.string = strdup(yytext); return LESS_THAN;
">"						yylval.string = strdup(yytext); return GREATER_THAN;
"^"						return CARET;
"|"						yylval.string = strdup(yytext); return PIPE;
"?"						return QUESTION_MARK;



{HEX_PREFIX}{HEXADECIMAL}+{IS}?								return CONSTANT;
"0"{OCTAL}*{IS}?											return CONSTANT;
{NON_ZERO}{DECIMAL}*{IS}?									return CONSTANT;

{DECIMAL}+{EXPONENT}{FS}?									return CONSTANT;
{DECIMAL}*"."{DECIMAL}+{EXPONENT}?{FS}?	 					return CONSTANT;
{HEX_PREFIX}{HEXADECIMAL}+{P}{FS}?		 					return CONSTANT;
{HEX_PREFIX}{HEXADECIMAL}*"."{HEXADECIMAL}+{P}{FS}?			return CONSTANT;



{STRING}				return STRING;
{CHARACTER}			    return CONSTANT;
{ID}					yylval.string = strdup(yytext); return ID;
[ \t\n] 				return SEPARATOR;
<<EOF>>    			    free(yylval.string); return 0;
{COMMENT}				;



.						{ imprimirLinea(); printf("TOKEN irreconocible %s en la linea: %d\n", yytext, yylineno);}

%%

int yywrap(void)
{
	return 1;
}

void imprimirLinea()
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
	            printf("-->  %s\n\n", line);
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
