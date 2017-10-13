//#include "token.h"

struct Token {
    int tokenId;            //Value assigned to a token
	char *lexicalCategory;	//Token type, such as LBACE, etc.
	char *lexeme;			//The expression correpsonding to certain token
	char *CTokenFamily;      //According to 6 kinds of tokens that C has https://msdn.microsoft.com/en-us/library/c6sb2c6b.aspx
	int	  lineNo;			//Number of the line where the token is located
} Token;

char *names[] = {NULL, "ALIGNOF", "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SHL", "SHR", "INC_OP", "DEC_OP", "PTR_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "SEMICOLON", "LBRACE", "RBRACE", "COMMA", "COLON", "EQUALS", "LPARENTHESIS", "RPARENTHESIS", "LBRACKET", "RBRACKET", "DOT", "AMPERSAND", "EXCLAMATION", "TILDE", "MINUS", "PLUS", "STAR", "SLASH", "MODULO", "LESS_THAN", "GREATER_THAN", "CARET", "PIPE", "QUESTION_MARK",  "INCLUDE", "DEFINE",  "STRING", "CHARACTER", "ID", "CONSTANT", "BACKSLASH", "SEPARATOR"};
struct Token getToken();

char *getTokenFamily(int tokenId);

