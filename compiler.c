#include <stdio.h>
#include <unistd.h>
#include "compiler.h"
#include "semanticStack.c"
#include "parser.tab.c"

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

    semanticStack = getSemanticStack();

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
	int temp = numTemp;
	for(i = 0 ; i<4 ; i++)
	{
		*(nombre_variable+7-i) = (temp%10) + '0';
		temp /= 10 * (i+1);
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
	int temp = numLbl;
	for(i = 0 ; i<4 ; i++)
	{
		*(nombre_label+8-i) = (temp%10) + '0';
		temp /= 10 * (i+1);
	}

	numLbl++;
	printf("Label numero: %i\n", numLbl);
	return nombre_label;

}

int escribirSalida(char* inst)
{
	fprintf(out_file, inst);
}


void inicio_if()
{
	struct SemanticRecord *RSIF;
	RSIF = createIFSR();
	PUSH(semanticStack, (NODE)RSIF);

	struct IFS *ifs = (struct IFS *)RSIF->DataBlock;

	char* inst = malloc(50*sizeof(char));
	strcpy(inst, "\tjz ");
	strcat(inst, ifs->else_label);
	strcat(inst, "\n");
	escribirSalida(inst);

	free(inst);
}

void fin_if()
{
	struct SemanticRecord *ifsRS = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 5);
	struct IFS *ifs = (struct IFS *)ifsRS->DataBlock;

	char* inst = malloc(50*sizeof(char));
	strcpy(inst, ifs->exit_label);
	strcat(inst, ":\n");
	escribirSalida(inst);

	free(inst);

	struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
    freeSemanticRecord(TOP);
}

void inicio_else()
{
	struct SemanticRecord *ifsRS = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 5);
	struct IFS *ifs = (struct IFS *)ifsRS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "\tjmp ");
	strcat(inst, ifs->exit_label);
	strcat(inst, "\n");
	escribirSalida(inst);

	strcpy(inst, ifs->else_label);
	strcat(inst, ":\n");
	escribirSalida(inst);

	free(inst);
}

void process_literal (char* text) 
{
	struct SemanticRecord *RSDO;
	RSDO = createDOSR(_LITERAL, text);
	PUSH(semanticStack, (NODE)RSDO);
	printf("Literal: %s\n", text);
}

void process_id (char* text) 
{
	struct SemanticRecord *RSDO;
	RSDO = createDOSR(_ID, text);
	PUSH(semanticStack, (NODE)RSDO);
	printf("ID: %s\n", text);


	/*if(!lookup_TS(id))
		rs.type = ERROR;
	else 
		rs.name = id;*/
}


