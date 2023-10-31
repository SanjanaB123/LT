%{ 
%}
operators "sarvado"|"badbaki"|"bhagakar"|"gunakar"
digit [0-9]
keywords mane|kari|aapo|ane|no
whitespace \t|\b|\n
punctuations "["|"]"|"{"|"}"|","|"("|")"
%%
{keywords} {printf("Keyword : %s\n",yytext);}
{digit}+ {printf("INT : %s \n",yytext);}
{digit}*"."{digit}+ {printf("FLOAT : %s \n",yytext);}
{punctuations} {printf("Punctuations : %s \n",yytext);}
[\t\n]+
{operators} {printf("Operator : %s\n",yytext);}
%%
int yywrap(){}
int main()
{
yylex();
return 0;
}
