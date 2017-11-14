char *getTokenFamily(int tokenId);
int fileExists(char *filename);


char* generarTemporales();
char* generarLabels();
int escribirSalida(char* inst);



void inicio_if();
void fin_if();
void inicio_else();
void process_literal(char* text);
void process_id(char* text);
void process_op(char* text);
void eval_binary();
void eval_unary();

void inicio_while();
void eval_while();
void fin_while();

void inicio_DOwhile();
void eval_DOwhile();
void fin_DOwhile();