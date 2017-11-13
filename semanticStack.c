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


int main(){
  LIST symTableStack;
  symTableStack = newList();

  /*tabla de símbolos*/
  LIST symbolTable;
  symbolTable = newList();

  /*Nodo que va a ir dentro de symTableStack*/
  struct SymbolTable *tablaGlobal = malloc(sizeof(struct SymbolTable));
  tablaGlobal->symbols = symbolTable;

  /*Un símbolo, que es un nodo dentro de la tabla de símbolos*/
  struct SymbolRecord *symbol = malloc(sizeof(struct SymbolRecord));
  symbol->id = "kontador";
  symbol->tipo = "ihnt";


  PUSH(tablaGlobal->symbols, (NODE)symbol);
  PUSH(symTableStack, (NODE)tablaGlobal);

  struct SymbolTable *tabla = (struct SymbolTable *)POP(symTableStack);
  struct SymbolRecord *simbolo = (struct SymbolRecord *)POP(tabla->symbols);
  printf("El símbolo tiene id: %s y tipo: %s\n", simbolo->id, simbolo->tipo);


}


// int main()
// {
//     LIST semanticStack;
//     struct SemanticRecord *SR;
//     struct SemanticRecord *SR2;
//
//     semanticStack = newList();
//     if (semanticStack)
//     {
//       SR = createTypeSR("char");
//       SR2 = createIDSR("contador");
//       if (SR){
//
//         PUSH(semanticStack, (NODE)SR);
//         PUSH(semanticStack, (NODE)SR2);
//
//         struct SemanticRecord *TOP = (struct SemanticRecord*)POP(semanticStack);
//         struct SemanticRecord *TOP2 = (struct SemanticRecord*)POP(semanticStack);
//
//
//         if (TOP){
//           printf("Top tag is %d\n", TOP->tag);
//         }
//         struct ID *myID = (struct ID*)TOP->DataBlock;
//         if (myID){
//
//           printf("Id is %s\n", myID->id);
//         }
//
//
//       if (TOP2){
//         printf("Top2 tag is %d\n", TOP2->tag);
//       }
//       struct Type *myType = (struct Type*)TOP2->DataBlock;
//       if (myType){
//
//         printf("Type is %s\n", myType->type);
//       }
//       free(semanticStack);
//       freeSemanticRecord(TOP);
//       freeSemanticRecord(TOP2);
//     }
//   }
// }
