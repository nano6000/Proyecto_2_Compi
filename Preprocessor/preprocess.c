#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "lex.yy.c"

#define MAX_INCLUDE_DEPTH 10
#define ROWS 512
#define COLUMNS 2
YY_BUFFER_STATE include_stack[MAX_INCLUDE_DEPTH];
int include_stack_ptr = 0;

int currentLine;
struct Token token;


char *defineTable[ROWS][COLUMNS]; //tabla de macros y sus definiciones
int cant_define;    //Cantidad de defines actualeas
char* replacement; //varible que contiene la definicion de una macro especifica

struct Token getToken(){
    token.tokenId = yylex();
    token.lexeme = yytext;
    token.lineNo = yylineno;
}

void rmQuote(char *d , char *s)
{
    if (*s=='"')
        s++;
    while (*d++=*s++)
        if (*s=='"')
            s++;
}

void rmNewLine(char *d)
{
    while (*d++!='\n');
    *--d='/';
}

void rmFirstChar(char *d)
{
    while (*d=*++d);
}

void rmSysIncludesChars(char *d , char *s){
    if (*s=='<')
        s++;
    while (*d++=*s++)
        if (*s=='>')
            s++;
}


void strgcpy(char *d , char *s)
{
    while (*d++);
    for (--d;*d++=*s++;);
}

int strgcmp(char *d, char *s)
{
    int i =0;
    int state = 0;
    for (i = 0; d[i]!='\0'; i++)
        if (d[i]!=s[i])
            return 0;
    return 1;
}

void reset(char *d)
{
    while (*d++='\0');
}

int push_file(int external)
{
    
    char *fullIncludePath = calloc(256, sizeof(char));

    printf("%s\n", yytext);
    //getToken();

    if ( include_stack_ptr >= MAX_INCLUDE_DEPTH )
    {
        fprintf( stderr, "Includes nested too deeply" );
        exit( 1 );
    }

    if(external)
    {
        FILE *includePaths = fopen("info.txt", "r");
        if ( includePaths != NULL )
        {
            char line[256]; /* or other suitable maximum line size */
            while (fgets(line, sizeof line, includePaths) != NULL) /* read a line */
            {
                if(*line==' ')
                {
                    strcpy(fullIncludePath, line);
                    rmNewLine(fullIncludePath);
                    strcat(fullIncludePath, yytext);

                    yyin = fopen( fullIncludePath+1, "r" );

                    if ( yyin )
                    {   
                        include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
                        yy_switch_to_buffer( yy_create_buffer( yyin, YY_BUF_SIZE ) );
                        printf("File opened: %s\n", fullIncludePath+1);
                        break;
                    }
                }
            }
        }
        fclose(includePaths);
    }
    else
    {
        yyin = fopen( yytext, "r" );

        if ( yyin )
        {   
            include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
            yy_switch_to_buffer( yy_create_buffer( yyin, YY_BUF_SIZE ) );
            printf("File opened: %s\n", yytext);
        }
        
    }


    if( !yyin )
    {
        printf("Invalid include file: \"%s\", use <file> or \"file\"\n", fullIncludePath);
        return 0;
    }
    return 1;
    
}

int fileExists(char *filename){
    return !access(filename, R_OK);
}

/*void read_define()
{
    int backslash = 0;
    while(token.tokenId == SEPARATOR)
    {
        getToken();
    }

    strgcpy(defineTable[cant_define][0], yytext);
    //printf("Lexema %s\n", defineTable[cant_define][0]);
    getToken();
    //printf("Lexema %s\n", yytext);


    while(token.tokenId == SEPARATOR)
    {
        getToken();
    }
    while(*yytext != '\n' | backslash)
    {
        if (token.tokenId == BACKSLASH)
            backslash = 1;
        else if (*yytext == '\n')
            backslash = 0;
        else if (*yytext == '\t')
        {
            getToken();
            continue;
        }
        else
        {
            strgcpy(defineTable[cant_define][1], yytext);
            //printf("Reemplazo %s\n", yytext);
        }
        getToken();
    }
    cant_define++;
}

void replace_define()
{
    int i;
    for(i = 0; i<cant_define; i++)
    {

        if (strgcmp(yytext, defineTable[i][0]) != 0)
        {
            //printf("Lexema 1%s\n", defineTable[i][0]);
            //printf("Lexema 2%s\n", yytext);
            strgcpy(replacement, defineTable[i][1]);
            //printf("Lexema %s\n", replacement);
            break;
        }
    }
}*/

int main(int argc, char **argv)
{
    system("(gcc -Wp,-v -x c++ - -fsyntax-only >& info.txt) & sleep 1; kill %%"); //obtiene los directorios en donde gcc busca los include

    if(argc>0)
    {
        yyin = fopen( argv[1], "r" );

        if ( ! yyin )
        {
            printf("No yyin\n");
            return 1;
        }

        yy_switch_to_buffer( yy_create_buffer( yyin, YY_BUF_SIZE ) );
    }

    getToken();


    //outputName = malloc(50 * sizeof(char));
    /*replacement = malloc(1000 * sizeof(char));
    reset(replacement);
    int i, j;
    for(i=0; i<ROWS; i++)
    {
        defineTable[i][0] = malloc(512 * sizeof(char));
        defineTable[i][1] = malloc(2048 * sizeof(char));
    }


    FILE* out_file;
    out_file = fopen("output.c", "w");
    yyout = out_file;

    while(token.tokenId)
    {
        //printf("%s\n", token.tokenId);
        if (token.tokenId == INCLUDE) //include found
        {
            getToken();
            read_includes();

        }
        if (token.tokenId == DEFINE) //define found
        {
            getToken();
            read_define();

        }
        if (token.tokenId == ID) //posible macro found
        {
            replace_define();



        }
        if(*replacement!='\0')
        {
            fprintf(yyout, "%s ", replacement);
            reset(replacement);
        }
        else
            fprintf(yyout, "%s ", yytext);
        getToken();
        //printf("Token: %s\n", yytext);

        if (token.tokenId == 0)
        {
            if ( --include_stack_ptr < 0 )
            {
                break;
            }

            else
            {
                //printf("Deberia pasar por aqui");
                yy_delete_buffer( YY_CURRENT_BUFFER );
                yy_switch_to_buffer(include_stack[include_stack_ptr] );
                //printf("Token: %s\n", yytext);
                getToken();
            }
        }
    }

    fclose(out_file);*/
    //free(outputName);
    return 0;
}