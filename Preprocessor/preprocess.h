struct Token {
    int tokenId;            //Value assigned to a token
	char *lexeme;			//The expression correpsonding to certain token
	int	  lineNo;			//Number of the line where the token is located
} Token;

int push_file(int external);
void read_define();