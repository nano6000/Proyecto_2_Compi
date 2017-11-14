#include <stdio.h>
#include <unistd.h>
#include "compiler.h"
#include "parser.tab.c"
#include "semanticStack.h"

#define BETWEEN(value, min, max) (value <= max && value >= min)

extern int yylex();
extern int yylineno;
extern char* yytext;

int numTemp;

LIST semanticStack;

int currentLine;

char* outputName;

FILE* out_file;

int main(int argc, char **argv)
{

	if(argc>0)
	{
		char* command = malloc(50*sizeof(char));
		strcpy(command, "./prep ");
		strcat(command, argv[1]);

	    if (system(command) )
	    {
	        printf("Preprocessing error!\n");
	        return 0;
	    }
	    free(command);
	}
	yyin = fopen( "output.c", "r" );

    if ( ! yyin )
    {
        printf("No yyin\n");
        return 0;
    }

    yy_switch_to_buffer( yy_create_buffer( yyin, YY_BUF_SIZE ) );

	yylineno = 1;

    extern int yydebug;
    yydebug = 0;

    numTemp = 0;
    outputName = malloc(15*sizeof(char));
    strcpy(outputName, "assembler.asm");

    out_file = fopen(outputName, "w");

    semanticStack = newList();

    yyparse();

    fclose(yyin);
    fclose(out_file);
    yyterminate();

    generarTemporales(1);
    generarLabels(1);
	return 0;
}

char* generarTemporales(int borrar)
{
	static int numTemp = 0;
	static char *nombre_variable;
	if (borrar)
	{
		free(nombre_variable);
		return "";
	}
	if(!nombre_variable)
		nombre_variable = malloc(15*sizeof(char));

	strcpy(nombre_variable, "temp0000");

	int i;
	for(i = 0 ; i<4 ; i++)
	{
		*(nombre_variable+7-i) = (numTemp%10) + '0';
		numTemp /= 10 * (i+1);
	}

	numTemp++;
	return nombre_variable;
}

char* generarLabels(int borrar)
{
	static int numLbl = 0;
	static char *nombre_label;
	if (borrar)
	{
		free(nombre_label);
		return "";
	}
	if(!nombre_label)
		nombre_label = malloc(15*sizeof(char));
	
	strcpy(nombre_label, "label0000");

	int i;
	for(i = 0 ; i<4 ; i++)
	{
		*(nombre_label+8-i) = (numLbl%10) + '0';
		numLbl /= 10 * (i+1);
	}

	numLbl++;
	return nombre_label;

}

int escribirSalida(char* inst)
{
	fprintf(out_file, inst);
}

