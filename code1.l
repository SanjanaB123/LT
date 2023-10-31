%{
#include<stdio.h>
%}

%token <int> INT
%token <float> FLOAT
%token KEYWORD PUNCTUATION

%left "badbaki"
%left "gunakar"
%left "bhagakar"

%%

expression: term
          | expression "badbaki" term { $$ = $1 - $3; }
          | expression "gunakar" term { $$ = $1 * $3; }
          | expression "bhagakar" term { $$ = $1 / $3; }
          ;

term: expression
    | INT { $$ = $1; }
    | FLOAT { $$ = $1; }
    | KEYWORD { $$ = 0; } /* Ignore keywords */
    | PUNCTUATION { $$ = 0; } /* Ignore punctuations */
    ;

whitespace ["\t\b\n"]

operators "sarvado","badbaki","bhagakar","gunakar"

%%

int main() {
    char input[256];
    printf("Enter an expression: ");
    fgets(input, sizeof(input), stdin);
    YY_BUFFER_STATE buffer = yy_scan_string(input);
    yyparse();
    yy_delete_buffer(buffer);
    return 0;
}