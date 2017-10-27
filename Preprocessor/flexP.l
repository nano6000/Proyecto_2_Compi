%{
//#include "token.h"

//#include "parser.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "preprocess.h"
void reset(char *);
%}
%option yylineno

%x INCLUDE_FILE
%x INCLUDE_FILE2
%x DEFINE_MACRO
%x DEFINE_MACRO2

WORD			[_a-zA-Z][_a-zA-Z0-9]*
COMMENT		    ("/*"[^*]*[*]+([^/*][^*]*[*]+)*[/])|"//".*

%%


<<EOF>> {
			yyterminate ();
        }


^"#"[ \t]*include[ \t]*[\"] { BEGIN INCLUDE_FILE; }

^"#"[ \t]*include[ \t]*[<] { BEGIN INCLUDE_FILE2; }

^"#"[ \t]*define[ \t]* { BEGIN DEFINE_MACRO; }



<INCLUDE_FILE>[^ \t\n\">]+  {
								{
									char c = input ();

									if(c!='"')
									{
									  fprintf (stderr, "Bad include line is found. Missing \'\"\' character\n");

									  yyterminate ();
									}
								}

								push_file (0);

								/*if (!push_file (0))
								{
									yyterminate ();
								}*/

								BEGIN INITIAL;
                        	}

<INCLUDE_FILE2>[^ \t\n\">]+ {
								{
									char c = input ();

									if(c!='>')
									{
									  fprintf (stderr, "Bad include line is found. Missing \'>\' character\n");

									  yyterminate ();
									}
								}

								push_file (1);

								/*if (!push_file (1))
								{
									yyterminate ();
								}*/

								BEGIN INITIAL;
							}

<INCLUDE_FILE>.|\n {
                     fprintf (stderr, "Bad include line is found.\n");

                     yyterminate ();
                   }


<DEFINE_MACRO>[^ \t\n]+  {
								//printf("primero leo: %s\n", yytext);
								read_define();
								BEGIN INITIAL;
                        	}



{WORD}					return 1;
[ \n\t]					return 100;
. 						return 2;
{COMMENT}				

%%

int yywrap(void)
{
	return 1;
}
