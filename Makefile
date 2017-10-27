CC = gcc
OBJS = compiler.c
FLEX = flex.l
BISON = parser.y
OUT = pruebas/compile

compile: $(OBJS)
	$(CC) -o $(OUT) $(OBJS) 

flex: $(FLEX)
	rm -f lex.yy.c
	lex $(FLEX)

bison: $(BISON)
	bison -d -t parser.y

debug: $(OBJS)
	$(CC) -g -o $(OUT) $(OBJS)
	gdb $(OUT)

all:
	bison -d -t $(BISON)
	lex $(FLEX)
	$(CC) -o $(OUT) $(OBJS) 

run:
	./$(OUT)
