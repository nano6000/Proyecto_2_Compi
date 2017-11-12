/* double linked list*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _ID 0
#define _TYPE 1
#define _DATA_OBJECT 2
#define _TOKEN 3


struct List {
   struct MNode *head;
   struct MNode *tail;
   struct MNode *tail_pred;
};

struct MNode {
   struct MNode *succ;
   struct MNode *pred;
};

struct SemanticRecord {
  struct MNode node;
  int tag; /*Ver SemanticRecords enum*/
  void *DataBlock; /*Puntero a bloque de datos*/
};

/*Block de datos para el RS tipo type*/
struct Type {
  char *type;
};

struct ID{
  char *id;
};


typedef struct MNode *NODE;
typedef struct List *STACK;

/*
** STACK l = newStack()
** create (alloc space for) and initialize a list
*/
STACK newStack(void);

/*
** int isEmpty(STACK l)
** test if a list is empty
*/
int isEmpty(STACK);

/*
** NODE n = GET_TOP(STACK l)
** get the tail node of the list, without removing it
*/
NODE GET_TOP(STACK);

/*
** NODE rn = PUSH(STACK l, NODE n)
** add the node n to the tail of the list l, and return it (rn==n)
*/
NODE PUSH(STACK, NODE);

/*
** NODE n = POP(STACK l)
** remove the tail node of the list and return it
*/
NODE POP(STACK);


/*
** NODE rn = removeNode(STACK l, NODE n)
** remove the node n (that must be in the list l) from the list and return it (rn==n)
*/
NODE removeNode(STACK, NODE);


/*
** NODE rn = RETRIEVE (STACK l, char *tag)
** Returns the first node in the list which matches tag
*/
NODE RETRIEVE (STACK, NODE);
