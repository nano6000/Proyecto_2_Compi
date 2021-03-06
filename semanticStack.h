/* double linked list*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _ERROR 0
#define _ID 1
#define _TYPE 2
#define _DO 3
#define _TOKEN 4
#define _IF 5
#define _LITERAL 6
#define _WHILE 7
#define _DOWHILE 8


struct List {
   struct MNode *head;
   struct MNode *tail;
   struct MNode *tail_pred;
};

struct MNode {
   struct MNode *succ;
   struct MNode *pred;
};

/*Registro Semántico*/
struct SemanticRecord {
  struct MNode node;
  int tag; /*Ver SemanticRecords enum*/
  void *DataBlock; /*Puntero a bloque de datos*/
};


/*Tabla de símbolos con una lista de símbolos*/
struct SymbolTable{
  struct MNode node;
  struct List *symbols;
};

/*Símbolo a ser guardado en una tabla de símbolo*/
struct SymbolRecord{
  struct MNode node;
  char *id;
  char *type;
};

/*Block de datos para el RS tipo type*/
struct Type {
  char *type;
};

struct ID{
  char *id;
};

struct IFS{
  char *else_label;
  char *exit_label;
};

struct DO{
  int type;
  char *data;
};

struct TOKEN{
  char *data;
};

struct WHILE
{
  char* begin_label;
  char* exit_label;
};

struct DOWHILE
{
  char* begin_label;
  char* exit_label;
};


typedef struct MNode *NODE;
typedef struct List *LIST;

/*
** LIST l = newList()
** create (alloc space for) and initialize a list
*/
LIST newList(void);

/*
** int isEmpty(LIST l)
** test if a list is empty
*/
int isEmpty(LIST);

/*
** NODE n = GET_TOP(LIST l)
** get the tail node of the list, without removing it
*/
NODE GET_TOP(LIST);

/*
** NODE rn = PUSH(LIST l, NODE n)
** add the node n to the tail of the list l, and return it (rn==n)
*/
NODE PUSH(LIST, NODE);

/*
** NODE n = POP(LIST l)
** remove the tail node of the list and return it
*/
NODE POP(LIST);


/*
** NODE rn = removeNode(LIST l, NODE n)
** remove the node n (that must be in the list l) from the list and return it (rn==n)
*/
NODE removeNode(LIST, NODE);


/*
** NODE rn = RETRIEVE (LIST l, int tag)
** Returns the first node in the list which matches tag
*/
struct SemanticRecord *RETRIEVE_SR (LIST, int tag);


struct SymbolRecord *newSymbolRecord(char* type, char* id);
struct SymbolTable *newSymbolTable();
void freeSemanticRecord (struct SemanticRecord *semanticRecord);
struct SemanticRecord *createIFSR();
struct SemanticRecord *createIDSR(char *IDStr);
struct SemanticRecord *createTypeSR(char *typeStr);
