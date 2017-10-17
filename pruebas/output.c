
 MicroInstruction   string2StructMicroInstruction ( char   * line ) { 
 	 MicroInstruction   microInstruction   =   { "" , "" , "" } ; 
 	 short   counter   =   0 ; 
 	 char   * iterator   =   line ; 
 	 char   * separator ; 
 
 	 
 	 separator   =   strstr ( line ,   "<" ) ; 
 	 if   ( separator ) { 
 	 	 microInstruction . OP [ 0 ]   =   separator [ 0 ] ; 
 	 	 microInstruction . OP [ 1 ]   =   separator [ 1 ] ; 
 	 	 microInstruction . OP [ 2 ]   =   \ 0 ; 
 	 }   else   { 
 
 	 	 
 	 	 separator   =   strstr ( line ,   ":" ) ; 
 	 	 if   ( separator ) { 
 	 	 	 microInstruction . OP [ 0 ]   =   separator [ 0 ] ; 
 	 	 	 microInstruction . OP [ 2 ]   =   \ 0 ; 
 	 	 }   else   { 
 
 	 	 	 
 	 	 	 
 	 	 	 
 	 	 	 separator   =   line ; 
 	 	 	 while   ( * separator )   separator ++ ; 
 
 	 	 	 printf ( "Separator is %c\n" ,   * separator ) ; 
 	 	 } 
 	 } 
 
 	 
 	 while   ( iterator   !=   separator )   { 
 	 	 if   ( * iterator   ==     )   { 
 	 	 	 iterator ++ ; 
 	 	 	 continue ; 
 	 	 } 
 	 	 microInstruction . leftOP [ counter ++ ]   =   * iterator ++ ; 
 	 } 
 
 	 
 	 microInstruction . leftOP [ counter ]   =   \ 0 ; 
 
 	 counter   =   0 ; 
 
 	 
 	 if   ( microInstruction . OP [ 0 ] ==   < )   iterator ++ ; 
 	 iterator ++ ; 
 
 	 if   ( microInstruction . OP [ 0 ]   ==   \ 0 )   return   microInstruction ; 
 
 	 
 	 while   ( * iterator   !=   \ 0 )   { 
 	 	 if   ( * iterator   ==     )   { 
 	 	 	 iterator ++ ; 
 	 	 	 continue ; 
 	 	 } 
 	 	 microInstruction . rightOP [ counter ++ ]   =   * iterator ++ ; 
 	 } 
 
 	 
 
 	 return   microInstruction ; 
 } 
 
 
 
 void   parseMicroInstruction   ( MicroInstruction   microInstruction ) { 
 
 	 char   * separator ; 
 	 char   * registerX   =   calloc ( 3 ,   sizeof ( char ) ) ; 
 	 char   * registerY   =   calloc ( 3 ,   sizeof ( char ) ) ; 
 
 	 separator   =   strstr ( microInstruction . OP ,   "<" ) ; 
 	 if   ( separator )   { 
 	 	 parseMicroMov ( microInstruction ) ; 
 	 } else   { 
 	 	 separator   =   strstr ( microInstruction . OP ,   ":" ) ; 
 	 	 if   ( separator ) { 
 	 	 	   if ( ! strcmp ( microInstruction . leftOP ,   "ALU" ) ) { 
 	 	 	 	   
 	 	 	 	   parseMicroALU ( microInstruction ) ; 
 	 	 	   } else   if   ( ! strcmp ( microInstruction . leftOP ,   "MEM" ) ) { 
 	 	 	 	   parseMicroMEM ( microInstruction ) ; 
 	 	 	   } else   if   ( ! strcmp ( microInstruction . leftOP ,   "TEST" ) ) { 
 	 	 	 	   
 	 	 	   } else   printf ( "Microinstruction %s not recognized in %s%s%s\n" ,   microInstruction . leftOP ,   microInstruction . leftOP ,   microInstruction . OP ,   microInstruction . rightOP ) ; 
 
 	 	 } 
 	 	 else { 
 	 	 	 
 	 	 	 if   ( ! strcmp ( microInstruction . leftOP ,   "IN" ) ) { 
 	 	 	 	 printf ( "IN found\n" ) ; 
 	 	 	 } else   if   ( ! strcmp ( microInstruction . leftOP ,   "OUT" ) ) { 
 	 	 	 	 printf ( "OUT found\n" ) ; 
 	 	 	 } 
 	 	 	 
 	 	 	 else   printf ( "Microinstruction %s not recognized\n" ,   microInstruction . leftOP ) ; 
 
 	 	 } 
 	 } 
 } 
 
 
 void   parseMicroMov ( MicroInstruction   microInstruction ) { 
 
 	 
 	 if   ( microInstruction . leftOP [ 0 ] == [   ) { 
 	 	 printf ( "MicroInstruction invalid, can't <- between memory addresses: \"%s\"\n" ,   microInstruction . leftOP ) ; 
 	 	 return ; 
 	 } 
 	 if   ( microInstruction . rightOP [ 0 ] == [   ) { 
 	 	 printf ( "MicroInstruction invalid, can't <- between memory addresses: \"%s\"\n" ,   microInstruction . rightOP ) ; 
 	 	 return ; 
 	 } 
 
 	 int   i   =   0 ; 
 	 int   size   =   registerNamesLength ; 
 	 int   leftRegisterIndex   =   - 1 ; 
 	 int   rightRegisterIndex   =   - 1 ; 
 
 	 
 	 for   ( i   =   0 ;   i   <   size ; i ++ ) { 
 	 	 if   ( ! strcmp ( microInstruction . leftOP ,   registerNames [ i ] ) ) { 
 	 	 	 leftRegisterIndex   =   i ; 
 	 	 	 printf   ( "leftOP found at registerNames[%d]=%s\n" , i , registerNames [ i ] ) ; 
 	 	 	 break ; 
 	 	 } 
 	 } 
 
 	 
 	 if   ( leftRegisterIndex !=   - 1 ) { 
 
 	 	 
 	 	 if   ( isdigit ( microInstruction . rightOP [ 0 ] ) ) { 
 
 	 	 	 printf ( "It was a digit\n" ) ; 
 
 	 	 	 
 	 	 	 registers [ leftRegisterIndex ]   =   strtol ( microInstruction . rightOP , 0 , 10 ) ; 
 	 	 	 return ; 
 	 	 } 
 
 	 	 
 	 	 for   ( i   =   0 ;   i   <   size ; i ++ ) { 
 	 	 	 if   ( ! strcmp ( microInstruction . rightOP ,   registerNames [ i ] ) ) { 
 	 	 	 	 rightRegisterIndex   =   i ; 
 	 	 	 	 printf   ( "rightOP found at registerNames[%d]=%s\n" , i , registerNames [ i ] ) ; 
 	 	 	 	 break ; 
 	 	 	 } 
 	 	 } 
 	 	 
 	 	 if   ( rightRegisterIndex !=   - 1 ) { 
 
 	 	 	 
 	 	 	 registers [ leftRegisterIndex ]   =   registers [ rightRegisterIndex ] ; 
 	 	 	 for   ( i = 0 ; i < size ; i ++ ) { 
 	 	 	 	 printf ( "registers[%d]=%d\n" ,   i ,   registers [ i ] ) ; 
 	 	 	 } 
 
 	 	 } else { 
 	 	 	 printf ( "MicroInstruction <- not valid. Invalid right operand: \"%s\"\n" ,   microInstruction . rightOP ) ; 
 	 	 } 
 
 
 	 } else { 
 	 	 printf ( "MicroInstruction <- not valid. Invalid left operand: \"%s\"\n" ,   microInstruction . leftOP ) ; 
 	 } 
 } 
 
 void   parseMicroALU ( MicroInstruction   microInstruction ) { 
 
 	 int   i   =   0 ; 
 	 int   size   =   registerNamesLength ; 
 	 int   B1 ,   B2 ,   B3 ,   B4   =   - 1 ; 
 
 	 
 	 for   ( i   =   0 ;   i   <   size ; i ++ ) { 
 	 	 if   ( ! strcmp ( "B1" ,   registerNames [ i ] ) ) { 
 	 	 	 B1   =   i ; 
 	 	 	 B2   =   i + 1 ; 
 	 	 	 B3   =   i + 2 ; 
 	 	 	 B4   =   i + 3 ; 
 	 	 	 printf   ( "B registers found at registerNames[%d]=%s\n" , i , registerNames [ i ] ) ; 
 	 	 	 break ; 
 	 	 } 
 	 } 
 
 	 struct   ALU   alu   =   { registers [ B1 ] , registers [ B2 ] , registers [ B3 ] , registers [ B4 ] } ; 
 
 	 printf ( "%s \n" , microInstruction . leftOP ) ; 
 
 	 if   ( ! strcmp ( microInstruction . leftOP ,   "ALU" ) )   { 
 
 	 	 if   ( ! strcmp ( microInstruction . rightOP ,   "add" ) ) { 
 	 	 	 MicroAdd ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "sub" ) ) { 
 	 	 	 MicroSub ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "mul" ) ) { 
 	 	 	 MicroMul ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "div" ) ) { 
 	 	 	 MicroDiv ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "and" ) ) { 
 	 	 	 MicroAnd ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "or" ) ) { 
 	 	 	 MicroOr ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "xor" ) ) { 
 	 	 	 MicroXor ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,     "not" ) ) { 
 	 	 	 MicroNot ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "shr" ) ) { 
 	 	 	 MicroShr ( & alu ) ; 
 	 	 } 
 
 	 	 else   if   ( ! strcmp ( microInstruction . rightOP ,   "shl" ) ) { 
 	 	 	 MicroShl ( & alu ) ; 
 	 	 } 
 
 
 	 	 registers [ B1 ]   =   alu . B1 ; 
 	 	 registers [ B2 ]   =   alu . B2 ; 
 	 	 registers [ B3 ]   =   alu . B3 ; 
 	 	 registers [ B4 ]   =   alu . B4 ; 
 	 	 printf ( "%d \n" , registers [ B1 ] ) ; 
 	 	 printf ( "%d \n" , registers [ B2 ] ) ; 
 	 	 printf ( "%d \n" , registers [ B3 ] ) ; 
 	 	 printf ( "%d \n" , registers [ B4 ] ) ; 
 
 	 } else { 
 	 	 printf ( "MicroInstruction not recognized \"%s\"\n" ,   microInstruction . leftOP ) ; 
 	 	 return ; 
 
 	 	 } 
 } 
 
 
 
 void   parseMicroMEM ( MicroInstruction   microInstruction ) { 
 
 	 int   i   =   0 ; 
 	 int   size   =   registerNamesLength ; 
 	 int   MAR ; 
 
 	 for   ( i   =   0 ;   i   <   size ; i ++ ) { 
 	 	 if   ( ! strcmp ( "MAR" ,   registerNames [ i ] ) ) { 
 	 	 	 MAR   =   i ; 
 	 	 	 printf   ( "MAR register found at registerNames[%d]=%s\n" , i , registerNames [ i ] ) ; 
 	 	 	 break ; 
 	 	 } 
 	 } 
 
 	 if   ( ! strcmp ( microInstruction . rightOP ,   "R" ) ) { 
 	 	 MBR   =   memory [ MAR ] ; 
 	 } else   if   ( ! strcmp ( microInstruction . rightOP ,   "W" ) ) { 
 	 	 memory [ MAR ]   =   MBR ; 
 	 } else { 
 	 	 printf ( "Unknown MEM mode %s. Should be R for read and W for write\n" ,   microInstruction . rightOP ) ; 
 	 } 
 
 } 
 