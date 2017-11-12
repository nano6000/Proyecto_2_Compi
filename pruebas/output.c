

struct List {
   struct MNode *head;
   struct MNode *tail;
   struct MNode *tail_pred;
};

struct MNode {
   struct MNode *succ;
   struct MNode *pred;
};

typedef struct MNode *NODE;
typedef struct List *LIST;


LIST newList(void);


int isEmpty(LIST);


NODE getTail(LIST);


NODE getHead(LIST);


NODE addTail(LIST, NODE);


NODE addHead(LIST, NODE);


NODE remHead(LIST);


NODE remTail(LIST);


NODE insertAfter(LIST, NODE, NODE);


NODE removeNode(LIST, NODE);


LIST newList(void)
{
    LIST tl = malloc(sizeof(struct List));
    if ( tl != NULL )
    {
       tl->tail_pred = (NODE)&tl->head;
       tl->tail = NULL;
       tl->head = (NODE)&tl->tail;
       return tl;
    }
    return NULL;
}

int isEmpty(LIST l)
{
   return (l->head->succ == 0);
}

NODE getHead(LIST l)
{
  return l->head;
}

NODE getTail(LIST l)
{
  return l->tail_pred;
}


NODE addTail(LIST l, NODE n)
{
    n->succ = (NODE)&l->tail;
    n->pred = l->tail_pred;
    l->tail_pred->succ = n;
    l->tail_pred = n;
    return n;
}

NODE addHead(LIST l, NODE n)
{
    n->succ = l->head;
    n->pred = (NODE)&l->head;
    l->head->pred = n;
    l->head = n;
    return n;
}

NODE remHead(LIST l)
{
   NODE h;
   h = l->head;
   l->head = l->head->succ;
   l->head->pred = (NODE)&l->head;
   return h;
}

NODE remTail(LIST l)
{
   NODE t;
   t = l->tail_pred;
   l->tail_pred = l->tail_pred->pred;
   l->tail_pred->succ = (NODE)&l->tail;
   return t;
}

NODE insertAfter(LIST l, NODE r, NODE n)
{
   n->pred = r; n->succ = r->succ;
   n->succ->pred = n; r->succ = n;
   return n;
}

NODE removeNode(LIST l, NODE n)
{
   n->pred->succ = n->succ;
   n->succ->pred = n->pred;
   return n;
}
