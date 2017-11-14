CC = gcc
OBJS = preprocess.c semanticStack.c
FLEX = flexP.l
OUT = ../pruebas/prep

compile: $(OBJS)
	$(CC) -o $(OUT) $(OBJS) 

flex: $(FLEX)
	rm -f lex.yy.c
	lex $(FLEX)

debug: $(OBJS)
	$(CC) -g -o $(OUT) $(OBJS)
	gdb $(OUT)

all:
	lex $(FLEX)
	$(CC) -o $(OUT) $(OBJS) 

run:
	./$(OUT)