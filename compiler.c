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

	/*printf("Finished parsing\n");

	LIST PS = getSemanticStack();
	struct SemanticRecord * testSR = (struct SemanticRecord *)GET_TOP(PS);
	while (testSR){
	if (testSR->tag == 2){
	struct Type *type = (struct Type *)testSR->DataBlock;
	printf("Tag 2 is type, so, value of type is %s\n",type->type);
	}
	else if(testSR->tag == 1){
	struct ID *id = (struct ID *)testSR->DataBlock;
	printf("Tag 1 is ID, so, value of id is %s\n",id->id);
	}
	testSR = (struct SemanticRecord *)testSR->node.pred;
	}*/

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
	struct SemanticRecord *DORS = (struct SemanticRecord*)POP(semanticStack);
	struct DO *DO = (struct DO *)DORS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----inicio_if\n");
	escribirSalida(inst);

	strcpy(inst, "\tcmp ");
	strcat(inst, DO->data);
	strcat(inst, ", 0\n");
	escribirSalida(inst);

	struct SemanticRecord *RSIF;
	RSIF = createIFSR();
	PUSH(semanticStack, (NODE)RSIF);

	struct IFS *ifs = (struct IFS *)RSIF->DataBlock;

	strcpy(inst, "\tjz ");
	strcat(inst, ifs->else_label);
	strcat(inst, "\n\n");
	escribirSalida(inst);

	free(inst);
	freeSemanticRecord(DORS);
}

void fin_if()
{
	struct SemanticRecord *ifsRS = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 5);
	struct IFS *ifs = (struct IFS *)ifsRS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----fin_if\n");
	escribirSalida(inst);

	strcpy(inst, ifs->exit_label);
	strcat(inst, ":\n\n");
	escribirSalida(inst);

	free(inst);

	struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
	while (TOP->tag != _IF)
	{
		freeSemanticRecord(TOP);
		TOP = (struct SemanticRecord*)POP(semanticStack);
	}
    freeSemanticRecord(TOP);
}

void inicio_else()
{
	struct SemanticRecord *ifsRS = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 5);
	struct IFS *ifs = (struct IFS *)ifsRS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----inicio_else\n");
	escribirSalida(inst);

	strcpy(inst, "\tjmp ");
	strcat(inst, ifs->exit_label);
	strcat(inst, "\n");
	escribirSalida(inst);

	strcpy(inst, ifs->else_label);
	strcat(inst, ":\n\n");
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
	RSDO = createIDSR(text);
	PUSH(semanticStack, (NODE)RSDO);
	printf("ID: %s\n", text);


	/*if(!lookup_TS(id))
		rs.type = ERROR;
	else 
		rs.name = id;*/
}

void process_op(char* text) 
{
	struct SemanticRecord *SR;
	SR = createTOKENSR(text);
	PUSH(semanticStack, (NODE)SR);
	printf("OPERATOR: %s\n", text);
}

void eval_binary() 
{
	struct SemanticRecord *op2 = (struct SemanticRecord*)POP(semanticStack);
	struct SemanticRecord *operador = (struct SemanticRecord*)POP(semanticStack);
	struct SemanticRecord *op1 = (struct SemanticRecord*)POP(semanticStack);

	struct SemanticRecord *RSDO;
	char* inst = malloc(50*sizeof(char));
	char* variableTemporal = malloc(15*sizeof(char));
	variableTemporal = generarTemporales(0);

	if(op1->tag && operador->tag && op2->tag)
	{
		struct TOKEN *token = (struct TOKEN *)operador->DataBlock;
		struct DO *opDO = (struct DO *)op1->DataBlock;
		if(!strcmp(token->data, "+"))
		{
			strcpy(inst, "\tmov ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			opDO = (struct DO *)op2->DataBlock;

			strcpy(inst, "\tadd ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ");
			strcat(inst, opDO->data);
			strcat(inst, "\n\n");
			escribirSalida(inst);
		}

		else if(!strcmp(token->data, "-"))
		{
			strcpy(inst, "\tmov ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			opDO = (struct DO *)op2->DataBlock;

			strcpy(inst, "\tsub ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ");
			strcat(inst, opDO->data);
			strcat(inst, "\n\n");
			escribirSalida(inst);
		}

		else if(!strcmp(token->data, "*"))
		{
			strcpy(inst, "\tmov al, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			opDO = (struct DO *)op2->DataBlock;

			strcpy(inst, "\tmov cl, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			strcpy(inst, "\tmul cl\n");
			escribirSalida(inst);

			strcpy(inst, "\tmov ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ax\n");
			escribirSalida(inst);

		}

		else if(!strcmp(token->data, "/"))
		{
			strcpy(inst, "\tmov dx, 0\n");
			escribirSalida(inst);

			strcpy(inst, "\tmov ax, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			opDO = (struct DO *)op2->DataBlock;

			strcpy(inst, "\tmov bx, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			strcpy(inst, "\tdiv bx\n");
			escribirSalida(inst);

			strcpy(inst, "\tmov ");
			strcat(inst, variableTemporal);
			strcat(inst, ", ax\n");
			escribirSalida(inst);

		}

		else if(!strcmp(token->data, "/"))
		{
			strcpy(inst, "\tmov dx, 0\n");
			escribirSalida(inst);

			strcpy(inst, "\tmov ax, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			opDO = (struct DO *)op2->DataBlock;

			strcpy(inst, "\tmov bx, ");
			strcat(inst, opDO->data);
			strcat(inst, "\n");
			escribirSalida(inst);

			strcpy(inst, "\tdiv bx\n");
			escribirSalida(inst);

			strcpy(inst, "\tmov ");
			strcat(inst, variableTemporal);
			strcat(inst, ", dx\n");
			escribirSalida(inst);

		}

		else if(!strcmp(token->data, "="))
		{
			strcpy(inst, "\tmov ");
			strcat(inst, opDO->data);

			opDO = (struct DO *)op2->DataBlock;

			strcat(inst, ", ");
			strcat(inst, opDO->data);
			strcat(inst, "\n\n");
			escribirSalida(inst);


			/*struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
			freeSemanticRecord(TOP);*/
		}
	}
	else
	{
		RSDO = createDOSR(_ERROR, variableTemporal);
		PUSH(semanticStack, (NODE)RSDO);
	}

	RSDO = createDOSR(_DO, variableTemporal);
	PUSH(semanticStack, (NODE)RSDO);

	freeSemanticRecord(op1);
	freeSemanticRecord(operador);
	freeSemanticRecord(op2);
	//Si alguno es de tipo ERROR: Crear D.O de tipo ERROR;
	//else:
	//	Si no se requiere generar código: Crear D.O con resultado calculado; //verificar todos los casos
	//else:Crear variable temporal; //crear esta función

	//Generar código para temporal con op1, operador, op2; //ve-rificar para cada operador
	//Crear D.O con referencia a temporal;
	//PUSH(D.O);
}

void eval_unary() 
{
	struct SemanticRecord *op2 = (struct SemanticRecord*)POP(semanticStack);
	struct SemanticRecord *op1 = (struct SemanticRecord*)POP(semanticStack);

	struct SemanticRecord *RSDO;
	char* inst = malloc(50*sizeof(char));
	char* variableTemporal = malloc(15*sizeof(char));
	variableTemporal = generarTemporales(0);

	printf("Tag 1: %i\nTag 2: %i\n", op1->tag, op2->tag);

	if(op1->tag && op2->tag)
	{
		if(op1->tag == _TOKEN)
		{
			struct TOKEN *op1DO = (struct TOKEN *)op1->DataBlock;
			struct ID *op2DO = (struct ID *)op2->DataBlock;
			if(!strcmp(op1DO->data, "++"))
			{
				strcpy(inst, "\tinc ");
				strcat(inst, op2DO->id);
				strcat(inst, "\n");
				escribirSalida(inst);

				strcpy(inst, "\tmov ");
				strcat(inst, variableTemporal);
				strcat(inst, ", ");
				strcat(inst, op2DO->id);
				strcat(inst, "\n\n");
				escribirSalida(inst);
			}

			else if(!strcmp(op1DO->data, "--"))
			{
				strcpy(inst, "\tdec ");
				strcat(inst, op2DO->id);
				strcat(inst, "\n");
				escribirSalida(inst);

				strcpy(inst, "\tmov ");
				strcat(inst, variableTemporal);
				strcat(inst, ", ");
				strcat(inst, op2DO->id);
				strcat(inst, "\n\n");
				escribirSalida(inst);
			}
		}
		else
		{
			struct DO *op1DO = (struct DO *)op1->DataBlock;
			struct DO *op2DO = (struct DO *)op2->DataBlock;
			if(!strcmp(op2DO->data, "++"))
			{
				strcpy(inst, "\tmov ");
				strcat(inst, variableTemporal);
				strcat(inst, ", ");
				strcat(inst, op1DO->data);
				strcat(inst, "\n\n");
				escribirSalida(inst);

				strcpy(inst, "\tinc ");
				strcat(inst, op1DO->data);
				strcat(inst, "\n");
				escribirSalida(inst);
			}

			else if(!strcmp(op2DO->data, "--"))
			{
				strcpy(inst, "\tmov ");
				strcat(inst, variableTemporal);
				strcat(inst, ", ");
				strcat(inst, op1DO->data);
				strcat(inst, "\n\n");
				escribirSalida(inst);

				strcpy(inst, "\tdec ");
				strcat(inst, op1DO->data);
				strcat(inst, "\n");
				escribirSalida(inst);
			}
		}
	}
	else
	{
		RSDO = createDOSR(_ERROR, variableTemporal);
		PUSH(semanticStack, (NODE)RSDO);
	}

	RSDO = createDOSR(_DO, variableTemporal);
	PUSH(semanticStack, (NODE)RSDO);

	freeSemanticRecord(op1);
	freeSemanticRecord(op2);
	//Si alguno es de tipo ERROR: Crear D.O de tipo ERROR;
	//else:
	//	Si no se requiere generar código: Crear D.O con resultado calculado; //verificar todos los casos
	//else:Crear variable temporal; //crear esta función

	//Generar código para temporal con op1, operador, op2; //ve-rificar para cada operador
	//Crear D.O con referencia a temporal;
	//PUSH(D.O);
}

void inicio_while()
{
	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----inicio_while\n");
	escribirSalida(inst);

	struct SemanticRecord *RSWHILE;
	RSWHILE = createWhileSR();
	PUSH(semanticStack, (NODE)RSWHILE);


	struct WHILE *While = (struct WHILE *)RSWHILE->DataBlock;

	strcpy(inst, While->begin_label);
	strcat(inst, "\n\n");
	escribirSalida(inst);

	free(inst);
}

void eval_while()
{
	struct SemanticRecord *DORS = (struct SemanticRecord*)POP(semanticStack);
	struct DO *DO = (struct DO *)DORS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----eval_while\n");
	escribirSalida(inst);

	strcpy(inst, "\tcmp ");
	strcat(inst, DO->data);
	strcat(inst, ", 0\n");
	escribirSalida(inst);

	struct SemanticRecord *RSWHILE = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 7);
	struct WHILE *While = (struct WHILE *)RSWHILE->DataBlock;

	strcpy(inst, "\tjz ");
	strcat(inst, While->exit_label);
	strcat(inst, "\n\n");
	escribirSalida(inst);

	free(inst);
	freeSemanticRecord(DORS);
}

void fin_while()
{
	struct SemanticRecord *RSWHILE = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 7);
	struct WHILE *While = (struct WHILE *)RSWHILE->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----fin_while\n");
	escribirSalida(inst);

	strcpy(inst, "\tjmp ");
	strcat(inst, While->begin_label);
	strcat(inst, ":\n");
	escribirSalida(inst);

	strcpy(inst, While->exit_label);
	strcat(inst, ":\n\n");
	escribirSalida(inst);

	free(inst);

	struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
	while (TOP->tag != _WHILE)
	{
		freeSemanticRecord(TOP);
		TOP = (struct SemanticRecord*)POP(semanticStack);
	}
    freeSemanticRecord(TOP);
}

void inicio_DOwhile()
{
	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----inicio_DOwhile\n");
	escribirSalida(inst);

	struct SemanticRecord *RSWHILE;
	RSWHILE = createDoWhileSR();
	PUSH(semanticStack, (NODE)RSWHILE);


	struct WHILE *While = (struct WHILE *)RSWHILE->DataBlock;

	strcpy(inst, While->begin_label);
	strcat(inst, ":\n\n");
	escribirSalida(inst);

	free(inst);
}

void eval_DOwhile()
{
	struct SemanticRecord *DORS = (struct SemanticRecord*)POP(semanticStack);
	struct DO *DO = (struct DO *)DORS->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----eval_DOwhile\n");
	escribirSalida(inst);

	strcpy(inst, "\tcmp ");
	strcat(inst, DO->data);
	strcat(inst, ", 0\n");
	escribirSalida(inst);

	struct SemanticRecord *RSWHILE = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 8);
	struct DOWHILE *DoWhile = (struct DOWHILE *)RSWHILE->DataBlock;

	strcpy(inst, "\tjnz ");
	strcat(inst, DoWhile->begin_label);
	strcat(inst, "\n\n");
	escribirSalida(inst);

	free(inst);
	freeSemanticRecord(DORS);
}

void fin_DOwhile()
{
	struct SemanticRecord *RSWHILE = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 8);
	struct DOWHILE *DoWhile = (struct DOWHILE *)RSWHILE->DataBlock;

	char* inst = malloc(50*sizeof(char));

	strcpy(inst, "-----fin_DOwhile\n");
	escribirSalida(inst);

	strcpy(inst, DoWhile->exit_label);
	strcat(inst, ":\n\n");
	escribirSalida(inst);

	free(inst);

	struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
	while (TOP->tag != _DOWHILE)
	{
		freeSemanticRecord(TOP);
		TOP = (struct SemanticRecord*)POP(semanticStack);
	}
    freeSemanticRecord(TOP);
}
