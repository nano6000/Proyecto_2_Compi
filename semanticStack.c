#include "semanticStack.h"


STACK newStack(void){
    STACK tl = malloc(sizeof(struct List));
    if (tl)
    {
       tl->tail_pred = (NODE)&tl->head;
       tl->tail = 0;
       tl->head = (NODE)&tl->tail;
       return tl;
    }
    return 0;
}

int isEmpty(STACK l){
   return (l->head->succ == 0);
}



NODE GET_TOP(STACK l){
  return l->tail_pred;
}


NODE PUSH(STACK l, NODE n){
    n->succ = (NODE)&l->tail;
    n->pred = l->tail_pred;
    l->tail_pred->succ = n;
    l->tail_pred = n;
    return n;
}



NODE POP(STACK l){
   NODE t;
   t = l->tail_pred;
   l->tail_pred = l->tail_pred->pred;
   l->tail_pred->succ = (NODE)&l->tail;
   return t;
}


NODE removeNode(STACK l, NODE n){
   n->pred->succ = n->succ;
   n->succ->pred = n->pred;
   return n;
}



struct SemanticRecord *createTypeSR(char *typeStr){
  /*Crea el registro Semántico*/
   struct SemanticRecord *SR = malloc(sizeof(struct SemanticRecord));

   /*Crea el Bloque de Datos*/
   struct Type *typeDataBlock = malloc(sizeof(struct Type));

   /*Reserva espacio para el tipo según el largo del mismo*/
   typeDataBlock->type = calloc (strlen(typeStr),sizeof(char));
   SR->tag = _TYPE;

   /*Asigna el sting dentro del struct*/
   strcpy(typeDataBlock->type, typeStr);

   /*Asigna el struct de Type al Block de Datos del Registro Semántico*/
   SR->DataBlock = typeDataBlock;

   /*Retorna el Registro Semántico*/
   return SR;
};

struct SemanticRecord *createIDSR(char *IDStr){
  struct SemanticRecord *SR = malloc(sizeof(struct SemanticRecord));
  struct ID *IDDataBlock = malloc(sizeof(struct ID));
  IDDataBlock->id = calloc (strlen(IDStr), sizeof(char));
  SR->tag = _ID;
  strcpy(IDDataBlock->id, IDStr);
  printf("INside createIDSR, id = %s", IDDataBlock->id);
  return SR;
}

void freeSemanticRecord (struct SemanticRecord *semanticRecord){

  struct SemanticRecord *SR = (struct SemanticRecord*)semanticRecord;
  struct ID *IDDataBlock;
  struct Type *typeDataBlock;
  switch (SR->tag) {
    case _ID:
      IDDataBlock = (struct ID *)SR->DataBlock;
      free(IDDataBlock->id);
      free(IDDataBlock);
      break;
    case _TYPE:
      typeDataBlock = (struct Type *)SR->DataBlock;
      free(typeDataBlock->type);
      free(typeDataBlock);
      break;
    case _DATA_OBJECT:
      break;
    case _TOKEN:
      break;
  }
}


int main()
{
    STACK semanticStack;
    struct SemanticRecord *SR;

    semanticStack = newStack();
    if (semanticStack)
    {
      SR = createTypeSR("char");
      if (SR){

        PUSH(semanticStack, (NODE)SR);

        struct SemanticRecord *TOP = (struct SemanticRecord*)GET_TOP(semanticStack);
        if (TOP){
          printf("Got top right\n");
        }
        struct Type *myType = (struct Type*)TOP->DataBlock;
        if (myType){
          printf("Got id right\n");
        }
        printf("Tag is %d\nType is %s\n", TOP->tag, myType->type);
        //freeSemanticRecord(TOP);
        //POP(semanticStack);
      }

      free(semanticStack);
    }
}
