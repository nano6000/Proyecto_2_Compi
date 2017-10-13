CC = gcc
OBJS = scanner.c
FLEX = flex.l
BISON = parser.y
OUT = scan

compile: $(OBJS)
	$(CC) -o $(OUT) $(OBJS) 

flex: $(FLEX)
	rm -f lex.yy.c
	lex $(FLEX)

bison: $(BISON)
	bison -d -g parser.y

debug: $(OBJS)
	$(CC) -g -o $(OUT) $(OBJS)
	gdb $(OUT)

all:
	rm -f lex.yy.c
	lex $(FLEX)
	$(CC) -o $(OUT) $(OBJS) 

run:
	./$(OUT)
