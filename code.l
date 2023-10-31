%{
#include<stdio.h>
%}

operators "sarvado"|"badbaki"|"bhagakar"|"gunakar"
digit [0-9]
keywords mane|kari|aapo|ane|no
whitespace [\t\b\n]
punctuations "["|"]"|"{"|"}"|","|"("|")"

/* Define the data structure for holding the token information */
%union {
    int intValue;
    float floatValue;
    char* stringValue;
}

/* Define the token types */
%token <intValue> INT
%token <floatValue> FLOAT
%token <stringValue> KEYWORD OPERATOR PUNCTUATION

/* Define the grammar rules */
%start statement
%left "sarvado"
%left "badbaki"
%left "bhagakar"
%left "gunakar"

%%
statement: expression { printf("Result : %f\n",$1); }
         ;

expression: term
          | expression "sarvado" term { $$ = $1 + $3; }
          | expression "badbaki" term { $$ = $1 - $3; }
          | expression "gunakar" term { $$ = $1 * $3; }
          | expression "bhagakar" term { $$ = $1 / $3; }
          ;

term: INT { $$ = $1; }
    | FLOAT { $$ = $1; }
    | KEYWORD { $$ = 0; } /* Ignore keywords */
    | PUNCTUATION { $$ = 0; } /* Ignore punctuations */
    ;

%%

/* Handle errors */
void yyerror(const char *s) {
    printf("Error: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}

/* Flex code to return tokens to YAAC */
int yylex() {
    int c = getchar();

    if (isdigit(c)) {
        ungetc(c, stdin);
        float value;
        scanf("%f", &value);
        yylval.floatValue = value;
        return FLOAT;
    }
    else if (isalpha(c)) {
        char* value = (char*)malloc(sizeof(char)*20);
        int i = 0;
        while (isalpha(c)) {
            value[i++] = c;
            c = getchar();
        }
        ungetc(c, stdin);
        value[i] = '\0';
        yylval.stringValue = value;
        return KEYWORD;
    }
    else if (isspace(c)) {
        while (isspace(c)) {
            c = getchar();
        }
        ungetc(c, stdin);
        return yylex();
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/') {
        char operator[2];
        operator[0] = c;
        operator[1] = '\0';
        yylval.stringValue = operator;
        return OPERATOR;
    }
    else if (c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}') {
        char punctuation[2];
        punctuation[0] = c;
        punctuation[1] = '\0';
        yylval.stringValue = punctuation;
        return PUNCTUATION;
    }
    else if (c == EOF) {
        return 0;
    }
    else {
        printf("Error: Invalid character '%c'\n", c);
        return 0;
    }
}