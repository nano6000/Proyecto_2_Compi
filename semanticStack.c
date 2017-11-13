#include "semanticStack.h"


LIST newList(void){
    LIST stack = malloc(sizeof(struct List));
    if (stack){

       stack->tail_pred = (NODE)&stack->head;
       stack->tail = 0;
       stack->head = (NODE)&stack->tail;
       return stack;
    }
    return 0;
}

int isEmpty(LIST l){
   return (l->head->succ == 0);
}

/**/
struct SemanticRecord *RETRIEVE_SR(LIST list, int tag){
  struct SemanticRecord *RS = (struct SemanticRecord *)GET_TOP(list);
  while (!isEmpty(list)){
    if(RS->tag == tag) return RS;
    RS = (struct SemanticRecord *)RS->node.pred;
  }
  return 0;
}

NODE GET_TOP(LIST l){
  return l->tail_pred;
}


NODE PUSH(LIST l, NODE n){
    n->succ = (NODE)&l->tail;
    n->pred = l->tail_pred;
    l->tail_pred->succ = n;
    l->tail_pred = n;
    return n;
}



NODE POP(LIST l){
   NODE t;
   t = l->tail_pred;
   l->tail_pred = l->tail_pred->pred;
   l->tail_pred->succ = (NODE)&l->tail;
   return t;
}


NODE removeNode(LIST l, NODE n){
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
  SR->DataBlock = IDDataBlock;
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


/*Crea una tabla de símbolos con una lista de símbolos*/
struct SymbolTable *newSymbolTable(){
  struct SymbolTable *table = malloc(sizeof(struct SymbolTable));
  if (table){
    LIST symbols = newList();
    if (symbols){
      table->symbols = symbols;
      return table;
    }
  }
  return 0;
}

struct SymbolRecord *newSymbolRecord(char* type, char* id){
  struct SymbolRecord *symbol = malloc(sizeof(struct SymbolRecord));
  symbol->type = type;
  symbol->id = id;
  return symbol;
}




// int main(){
//   LIST SymbolTableStack;
//   SymbolTableStack = newList();
//
//   PUSH(SymbolTableStack, (NODE)newSymbolTable());
//
//
//   /*Un símbolo, que es un nodo dentro de la tabla de símbolos*/
//   struct SymbolTable *table = (struct SymbolTable *)GET_TOP(SymbolTableStack);
//   struct SymbolRecord *symbol = newSymbolRecord("int*", "myIntPointer");
//   PUSH(table->symbols, (NODE)symbol);
//   symbol = newSymbolRecord("int2*", "myIntPointer2");
//   PUSH(table->symbols, (NODE)symbol);
//   symbol = newSymbolRecord("int3*", "myIntPointer3");
//   PUSH(table->symbols, (NODE)symbol);
//
//
//   struct SymbolTable *tabla = (struct SymbolTable *)POP(SymbolTableStack);
//   struct SymbolRecord *simbolo = (struct SymbolRecord *)POP(tabla->symbols);
//   printf("El símbolo tiene id: %s y tipo: %s\n", simbolo->id, simbolo->type);
//
//   simbolo = (struct SymbolRecord *)POP(tabla->symbols);
//   printf("El símbolo tiene id: %s y tipo: %s\n", simbolo->id, simbolo->type);
//
//   simbolo = (struct SymbolRecord *)POP(tabla->symbols);
//   printf("El símbolo tiene id: %s y tipo: %s\n", simbolo->id, simbolo->type);
//
// }


int pruebaSR0()
{
    LIST semanticStack;
    struct SemanticRecord *SR;
    struct SemanticRecord *SR2;

    semanticStack = newList();
    if (semanticStack)
    {
      SR = createTypeSR("char");
      SR2 = createIDSR("contador");
      if (SR){

        PUSH(semanticStack, (NODE)SR);
        PUSH(semanticStack, (NODE)SR2);

        struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
        struct SemanticRecord *TOP2 = (struct SemanticRecord*)POP(semanticStack);


        if (TOP){
          printf("Top tag is %d\n", TOP->tag);
        }
        struct ID *myID = (struct ID*)TOP->DataBlock;
        if (myID){

          printf("Id is %s\n", myID->id);
        }


      if (TOP2){
        printf("Top2 tag is %d\n", TOP2->tag);
      }
      struct Type *myType = (struct Type*)TOP2->DataBlock;
      if (myType){

        printf("Type is %s\n", myType->type);
      }

    }
  }
  return 0;
}


int pruebaSemanticStack0(){
    LIST semanticStack;
    struct SemanticRecord *SR;
    struct SemanticRecord *SR2;

    semanticStack = newList();
    if (semanticStack)
    {
      SR = createTypeSR("char");
      SR2 = createIDSR("contador");
      if (SR){

        PUSH(semanticStack, (NODE)SR);
        PUSH(semanticStack, (NODE)SR2);

        struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
        struct SemanticRecord *TOP2 = (struct SemanticRecord*)POP(semanticStack);


        if (TOP){
          printf("Top tag is %d\n", TOP->tag);
        }
        struct ID *myID = (struct ID*)TOP->DataBlock;
        if (myID){

          printf("Id is %s\n", myID->id);
        }


      if (TOP2){
        printf("Top2 tag is %d\n", TOP2->tag);
      }
      struct Type *myType = (struct Type*)TOP2->DataBlock;
      if (myType){

        printf("Type is %s\n", myType->type);
      }

    }
  }
  return 0;
}

int pruebaRetrieve0(){
  LIST semanticStack;
  struct SemanticRecord *SR;
  struct SemanticRecord *SR2;
  struct SemanticRecord *SR3;
  struct SemanticRecord *SR4;

  semanticStack = newList();
  if (semanticStack){
    SR = createTypeSR("charSR");
    SR2 = createIDSR("contadorSR2");
    SR3 = createIDSR("contadorSR3");
    SR4 = createIDSR("contadorSR4");

    if (SR){
      PUSH(semanticStack, (NODE)SR);
      PUSH(semanticStack, (NODE)SR2);
      PUSH(semanticStack, (NODE)SR3);
      PUSH(semanticStack, (NODE)SR4);
      struct SemanticRecord *test = (struct SemanticRecord *)RETRIEVE_SR(semanticStack, 1);
      if (test){
        printf("Retrieved tag is %d\n", test->tag);
        if (test->tag == 2){
          struct Type *type = (struct Type *)test->DataBlock;
          printf("Tag 2 is type, so, value of type is %s\n",type->type);
        }
        else if(test->tag == 1){
          struct ID *id = (struct ID *)test->DataBlock;
          printf("Tag 1 is ID, so, value of id is %s\n",id->id);
        }
      }
    }
  }
  return 0;
}

int main(){
  pruebaRetrieve0();
  return 0;
}
