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

%%
^"#"[ \t]*include[ \t]*[\"] { BEGIN INCLUDE_FILE; }

^"#"[ \t]*include[ \t]*[<] { BEGIN INCLUDE_FILE2; }

<INCLUDE_FILE>[^ \t\n\">]+  {
								{
									char c = input ();

									if(c!='"')
									{
									  fprintf (stderr, "Bad include line is found.\n");

									  yyterminate ();
									}
								}

								if (!push_file (0))
								{
									yyterminate ();
								}

								BEGIN INITIAL;
                        	}

<INCLUDE_FILE2>[^ \t\n\">]+ {
								{
									char c = input ();

									if(c!='>')
									{
									  fprintf (stderr, "Bad include line is found.\n");

									  yyterminate ();
									}
								}

								if (!push_file (1))
								{
									yyterminate ();
								}

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
