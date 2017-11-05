#include <test.h>


typedef enum {
    UNDEF,		// Se devuelve cuando aún no se ha reconocido un token
    EOF, MONSTRUO,
    ERROR, ERROR001, ERROR002, ERROR003, ERROR004,
    IDENTIFICADOR,
    /*	Los siguientes tipos de token no son definitivos, son solamente
     *	los que se van a pintar de un color diferente a blanco en el pretty print */
    PROGRAM, APERTURA_SECCION, CHU_, GHOM, GHU, SAR, SEGH, NAGH,
    COMENTARIO,
    TADMOH,
    STRING, CARACTER, 
    ENTERO, HEXADECIMAL,
    BOOLEANO,
    OP_LOGICA, GHAP, JOG, _EJ, QO_,
    OP_CARACTER, OP_STRING, OP_CONJUNTO,
    /* Operadores unarios */
    OP_MAS_MAS, OP_MENOS_MENOS, OP_ARR_MENOR_MENOR, OP_ARR_MAYOR_MAYOR,
    	OP_ARR_NUM_PREG, OP_ARR_DOLAR_PREG, OP_AMP_EXCL, OP_NI_,
   	/* Operadores binarios */
    OP_MAS, OP_MENOS, OP_POR, OP_DIV, OP_DIV_DIV, OP_COLON_IGUAL, OP_MAS_IGUAL, OP_MENOS_IGUAL,
    	OP_POR_IGUAL, OP_DIV_IGUAL, OP_DIV_DIV_IGUAL, OP_DOLAR_MAS_IGUAL,
    	OP_DOLAR_PREG_IGUAL, OP_AMP_MAS_IGUAL, OP_AMP_MENOS_IGUAL, OP_AMP_MAS_MAS_IGUAL,
    	OP_AMP_MENOS_MENOS_IGUAL, OP_DOLAR_MAS, OP_DOLAR_PREG, OP_AMP_MAS, OP_AMP_MENOS,
    	OP_AMP_MAS_MAS, OP_AMP_MENOS_MENOS, OP_MENOR, OP_MAYOR, OP_IGUAL_IGUAL, 
    	OP_MENOR_IGUAL, OP_MAYOR_IGUAL, OP_MENOR_MAYOR, OP_AMP,
    /* Operadores ternarios */
    OP_DOLAR_DOLAR, OP_MAYOR_MAYOR, OP_MENOR_MENOR,
    /* Otros símbolos */
    CARET, DOLAR, SQ_BRACKET_IZQ, SQ_BRACKET_DER, /* [ ] */ 
    CUR_BRACKET_IZQ, CUR_BRACKET_DER,  /* { } */
    BRACKET_IZQ, BRACKET_DER, /* ( ) */
    DOT, COLON, COMMA,

    ACCESO_STRING, CHOH,
    INSTRUC_CONTROL, BE_, CHUGH, DUH, GHO_, GHOR, HOCH, 
    	LATLH, LEQ, LO_, MEH, MO_, MORGH, MU_,
        PIGH, PONG, QA_, QAP, QOD, QONOS, SO_WI_, TAGH, TAH, TEH,
    VAJ, VIS, 
    BUP,
    FUNCION, PROC, MIW,
    NOMBRE_FUNC, NOMBRE_PROC,
    GHITLHMI_, GHITLHMU_, GHITLHDEGH, GHITLHVIT, GHITLHVEY, GHITLHCHANG_ENG,
    LADMI_, LADMU_, LADDEGH, LADVIT, LADVEY, LADCHANG_ENG,
    /* Tipos */
    CHANG_ENG, DEGH, CHEN, HEGH, MI_, NGEB, TA, VEY, VIT, 
    RETURN,
    TERMINADOR
} Token_Tipo;

typedef struct {
	/*Token_Tipo*/ int tipo_token;
	char lexeme[127];
	int linea;
    int columna;
    int familia;

} Token;

/*Token*/ int nuevo_Token(/*Token_Tipo*/ int _tipo_token, char _lexeme[], int _linea, int _columna, int _familia);

char * get_String_Tipo(int tipo_token);


int nuevo_Token(/*Token_Tipo*/ int t, char * l, int li, int col, int fam) {
    /*int token;
    token.tipo_token = t;
    token.lexeme = _lexeme;
    strcpy(token.lexeme, l);
    token.linea = li;
    token.columna = col;
    token.familia = fam;*/
    return 1;
}

char * get_String_Tipo(int tipo_token) {
	switch(tipo_token) {
		case UNDEF:
			return "UNDEF";
        case EOF:
            return "EOF";
        case ERROR:
            return "Error";
        case ERROR001:
            return "-1";
        case ERROR002:
            return "-1";
        case ERROR003:
            return "-1";
        case ERROR004:
            return "-1";
        case MONSTRUO:
            return "-1";
        case IDENTIFICADOR:
            return "Identificador";
        case PROGRAM:
            return "Apertura programa";
        case APERTURA_SECCION:
        case GHOM:
        case GHU:
        case SAR:
        case SEGH:
        case NAGH:
            return "Apertura de seccion";
        case CHU_:
            return "Entrada al programa";
        case COMENTARIO:
            return "Comentario";
        case TADMOH:
            return "TADMOH";
        case STRING:
            return "String";
        case CARACTER:
            return "Caracter";
        case ENTERO:
            return "Entero";
        case HEXADECIMAL:
            return "Hexadecimal";
        case BOOLEANO:
            return "Booleano";
        case OP_MAS_MAS:
        case OP_MENOS_MENOS:
        case OP_ARR_MENOR_MENOR:
        case OP_ARR_MAYOR_MAYOR:
        case OP_ARR_NUM_PREG:
        case OP_ARR_DOLAR_PREG:
        case OP_AMP_EXCL:
        case OP_NI_:
            return "Operador unario";
        case OP_MAS:
        case OP_MENOS:
        case OP_POR:
        case OP_DIV:
        case OP_DIV_DIV:
        case OP_COLON_IGUAL:
        case OP_MAS_IGUAL:
        case OP_MENOS_IGUAL:
        case OP_POR_IGUAL:
        case OP_DIV_IGUAL:
        case OP_DIV_DIV_IGUAL:
        case OP_DOLAR_MAS_IGUAL:
        case OP_DOLAR_PREG_IGUAL:
        case OP_AMP_MAS_IGUAL:
        case OP_AMP_MENOS_IGUAL:
        case OP_AMP_MAS_MAS_IGUAL:
        case OP_AMP_MENOS_MENOS_IGUAL:
        case OP_DOLAR_MAS:
        case OP_DOLAR_PREG:
        case OP_AMP_MAS:
        case OP_AMP_MENOS:
        case OP_AMP_MAS_MAS:
        case OP_AMP_MENOS_MENOS:
        case OP_MENOR:
        case OP_MAYOR:
        case OP_IGUAL_IGUAL:
        case OP_MENOR_IGUAL:
        case OP_MAYOR_IGUAL:
        case OP_MENOR_MAYOR:
        case OP_AMP:
            return "Operador binario";
        case OP_DOLAR_DOLAR:
        case OP_MAYOR_MAYOR:
        case OP_MENOR_MENOR:
            return "Operador ternario";
        case CARET:
            return "Caret";
        case SQ_BRACKET_IZQ:
            return "Bracket izq.";
        case SQ_BRACKET_DER:
            return "Bracker der.";
        case CUR_BRACKET_IZQ:
            return "Llave izq.";
        case CUR_BRACKET_DER:
            return "Llave der.";
        case BRACKET_IZQ:
            return "Parentesis izq.";
        case BRACKET_DER:
            return "Parentesis der.";
        case DOT:
            return "Acceso a registro";
        case COMMA:
            return "Separador";
        case COLON:
            return "Tiporetornofuncion";
        case OP_LOGICA:
        case GHAP:
        case JOG:
        case _EJ:
        case QO_:
            return "Operador logico";
        case OP_CARACTER:
            return "Operacion Caracter";
        case OP_STRING:
            return "Operacion String";
        case OP_CONJUNTO:
            return "Operacion Conjunto";
        case ACCESO_STRING:
        case DOLAR:
            return "Acceso a String";
        case CHOH:
            return "Parametro Var";
        case INSTRUC_CONTROL:
        case BE_:
        case CHUGH:
        case DUH:
        case GHO_:
        case GHOR:
        case HOCH:
        case LATLH:
        case LEQ:
        case LO_:
        case MEH:
        case MO_:
        case QA_:
        case QAP:
        case QOD:
        case TAGH:
        case VAJ:
        case VIS:
        case PONG:
            return "Instruccion control";
        case QONOS:
        case SO_WI_:
        case PIGH:
            return "Directiva";
        case FUNCION:
            return "Funcion";
        case PROC:
        case MIW:
            return "Procedimiento";
        case NOMBRE_FUNC:
            return "Nombre funcion";
        case NOMBRE_PROC:   
            return "Nombre procedimiento";
        case GHITLHMI_:
        case GHITLHMU_:
        case GHITLHDEGH:
        case GHITLHVIT:
        case GHITLHVEY:
        case GHITLHCHANG_ENG:
            return "GHITLH";
        case LADMI_:
        case LADMU_:
        case LADDEGH:
        case LADVIT:
        case LADVEY:
        case LADCHANG_ENG:
            return "LAD";
        case CHANG_ENG:
        case DEGH:
        case CHEN:
        case HEGH:
        case MI_:
        case MORGH:
        case TA:
        case TEH:
        case VEY:
        case VIT:
        case MU_:
        case NGEB:
            return "Tipo de dato";
        case RETURN:
            return "Return";
        case BUP:
            return "Halt";
        case TAH:
            return "Continue";
        case TERMINADOR:
            return "^";
		default:
			return "";
	}
}

int **researveMemoryForMatrix(int **matrix, int n, int m);
void freeMatrix(int **matrix, int rows);
void printMatrix(int **matrix, int rows, int columns);
void writeMatrixToFile(int **matrix, int rows, int columns);
int **researveGlobalMemoryForMatrix(int **matrix, int m, int n);

int **global_matrix;





                     static signed char a[] = {0x69,
                   110, 118, 97, 108, 105,  0x64, 1-1,
                 0x6d, 111, 118,  101, 11,1,1,11,11,1,1,
                 114,  105, 0x6e,  103,  32, 'o'/3, 100,
                 32, 102, 114, 111,  0x6d, 32, 115, 116,
                 97, 100-001, 107, 32,37, 2*'2', '@'>>1,
                 116, '%' + '%' + '%','w'-'W',115, 0x74,
                 97, 3*'!', 107, 'q' - 'Q', 37, 10*'\n',
                 10, 0}, * b = a + (1<<1<<1<<1), * w, x,
                 *q, c, ra; int main(int d, char *e []) {
                 return q = (signed char *)(e+1+1), (ra =
                 e[0] && e[1] ? 0 : 0 * puts (a) + 1) ||
                 (ra = e[1<<1] && d != 1 <<1 && 0 * puts(
                 a) + 1) || e[1- -1] ||  (ra = atoi(e[1])
                 < -0200 || atoi (e [1]) > 0x7f || ( x =
                 atoi( e[1] ) ) == 0 ? 0 * puts(a) + 1 :
                 0) || e [1- -1] || (x- -x > 1-1 ? (q[0]
                   = x, q[1] = q[3] = 1, q[2] = 2) : (
                     memset ( w = ( signed  char * )







                     malloc(-x), '1', -x), puts (w),
                   q[0] = x, q[1] = '0', q[2] = q[3] =
                 0)), ra || (q[3] ? (c = 6 - q[1] - q[2],
                 (q[0] != 1) ? q[0]-- , d = q[2], q[2] =
                 c, main(2, e), c = q[2], q[2] = d, q[0]
                 ++ : 0, printf(b, q[0], q[1], q[2]), (q
                 [0] != 1) ? q[0]--, d = q[1],q[1] = c ,
                 main(2, e), c = q[1], q[1] = d, q[0] ++
                 : 0) : - 1 - q[0] - 1 == 0 ? (w[- x - 1
                 - (q[1] & 1 ^ 1)] = q[1], puts (w), w [
                 - x - 1 - (q[1] & 1)] = q[1], puts(w) )
                 : - 1 - q[0] == 0 ?  (w[- x - 1] = q[ 1
                   ], puts(w)) : (q[0] += 1 + ( q[1] & 1
                       ^ 1), main(2, e), q[0] -= 1 + ( q
                             [1] & 1 ^ 1), q[1] & 1 ? (q
                                [0]+=1+1,  q[1]^=1, main
                                (2, e), q[1]^=1, q[0]-=1
                                +1) : 0, w[q[0] - x] = q
                               [1], puts(w), q[1] & 1 ?
                             0 : (q[0]+=1+1, q[1]^=1,
                           main (2, e), q[1]^=1, q
                         [0]-=1+1), q[0] += 1 +
                      (q[1] & 1),main(2,e)
                  , q[0] -= 1 + (q[1]
                 & 1) ) ), ra; }


    int i,j,k,l,m,*t,*u,*v, f;
    int r(x)int x;{return (rand()/256)%x;}
    void p(x,y)int *x,y;{for(i=y;--i;k=x[i],x[i]=x[j],x[j]=k)j=r(i+1);}
    
    void o(n,a,q,d)int n,d,*a,*q;
    {
    for(m=r(2)?n:1,t=q,l=n/2,i=n;
        i--&&(i!=l||i--);
        *(t++)=i);
    for(p(q,n-1),q[n-1]=l,u=a,i=j=0;
        i<n*n;
        u[i] =q[j]*m,j++,++i%n||(++j,u+=d),j>=n&&(j-=n));
    for(p(q,n-1),u=a,m=n+1-m,i=0,j=n-1;
        i<n*n;
        u[i]+=q[j]*m,j++,++i%n||(--j,u+=d),j>=n&&(j-=n));
    }
    
    void s(n,a,q,d)int n,d,*a,*q;
    {
    for(q[1]=3-(*q=r(n)),q[3]=3-(q[2]=1^q[r(2)]),t=a,i=n,m=3*r(2);
        i--;
        t+=d)
    for(j=n;
        j--;
        t++[0]=q[j^(i&m)^(i/2)]);
    for(q[1]=3-(*q=r(n)),q[3]=3-(q[2]=1^q[r(2)]),t=a,i=n,m=3-m;
        i--;
        t+=d)
    for(j=n;
        j--;
        t++[0]+=q[j^(i&m)^(i/2)]*4);
    }
    
    void e(n,a,q,d)int n,d,*a,*q;
    {
    int h,i,k,l,z,g=n/2;
    void (*m)();
    for((m=g!=4?g%2?o:e:s)(g,a,q,g+d),m(g,a+g,q,g+d),l=(n+d)*g,u=a,i=g;
        i--;
        u+=d)
    for(j=n;
        j--;
        j<g&&(*u+=g*2*g),l[u]=*u+(j<g?-1:3)*g*g,u++);
    for(i=g; i--; q[i]=i<g/2);
    for(h=k=(g+1)/2,v=a; v<a+n; v+=g){
        for(u=v,i=g; i--; u+=g+d){
            if(p(q,g),q[z=g-i-1])
            if(k)k--;
            else
            for(j=g;q[--j]||(q[j]=1,q[z]=0););
            else 
            if(k>i)
            for(j=g;!q[--j]||(k--,q[z]=1,q[j]=0););
            if(q[i])
            if(h)h--;
            else
            for(j=g;q[--j]||j==z||(q[j]=1,q[i]=0););
            else
            if(h>i||(g==3&&h&&(k==2||i==z)))
            for(j=g;!q[--j]||j==z||(h--,i==z&&k--,q[i]=1,q[j]=0););
            for(t=q,j=g;j--;u++)
            if(0[t++])z=*u,*u=u[l],u[l]=z;
        }
        for(h=k=g/2-g%2,i=g;i--;q[i]=i<h);
    }
    }

void leerLinea(int linea){
    int salida = 2;
    int i = 1;
    int caracter;
    int banderachar =0;
    int contador =0;
    char errorTemporal[100];
    while (caracter != 20 ){
        errorTemporal[contador]=caracter;
        contador++;
        if(caracter=='\n'){
            if(i==linea){
                break;
            }
            else{
                i++;
                //limpiarbuffer();
                contador=0;
            }
        }
        
    }
}

// Bubble Sort Function for Descending Order 
void BubbleSort()
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = 90;
      int num[90];
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])      // ascending order simply changes to <
              { 
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}


void count(){
    int row = 0;
    int column = 0;
    char* yytext;
    for (int i = 0; yytext[i] != '\0'; i++){
        if (yytext[i] == '\n'){
            column = 1;
            row++;
        }
        else if (yytext[i] == '\t'){
            column += 4 - (column % 4);
        }
        else{
            column++;
        }
    }
}

int startFirstInitializeStructure(int k){
	int res;
	int counter = 0;
	if (k <= 0){ return 0; }
	res = k;
	while(res != 0){
		res = res / 10;
		counter++;
	}
	return counter;
}
