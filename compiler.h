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