//Reemplazar este codigo en el yyparse

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
      yytoken = YYTRANSLATE (yychar);
      while (yytname[yytoken] == "SEPARATOR")
      {
        yychar = yylex ();
        yytoken = YYTRANSLATE (yychar);
      }
      YYDPRINTF ((stderr, "%s ", yytname[yytoken]));
      
    }