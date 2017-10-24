%{
//#include "token.h"

//#include "parser.tab.h"
#include <stdlib.h>
#include "preprocess.h"
void reset(char *);
%}
%option yylineno

%x INCLUDE_FILE

%%
^"#"[ \t]*include[ \t]*[\"<] { BEGIN INCLUDE_FILE; }

<INCLUDE_FILE>[^ \t\n\">]+ {

							char * file;
							file = malloc(50 * sizeof(char));
							printf( "--------> \n" );
                             {
                               char c;

                               while ((*file++ = c = input ()) && c != '\n') 
                               		;
                             }
                             printf( "--------> %s\n", file );
                             if (!push_file (file))
                             {
                               yyterminate ();
                             }

                             free(file);

                             BEGIN INITIAL;
                           }

<INCLUDE_FILE>.|\n {
                     fprintf (stderr, "Bad include line is found.\n");

                     yyterminate ();
                   }

<<EOF>> {
			yyterminate ();
        }

. 			{ ECHO; }
%%

int yywrap(void)
{
	return 1;
}
