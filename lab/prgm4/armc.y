%{
    #include<stdio.h>
    #include<stdlib.h>
%}
%token NUMBER ID
%left '+''-'
%left '*''/'
%right UMINUS
%%
	E:T 
	T:T'+'T 
	|T'-'T 
	|T'*'T 
	|T'/'T 
	|'-'T%prec UMINUS
	|'('T')'
	|NUMBER
	|ID ;
%%
int yyerror()
{
	printf("Invalid expression\n");
	exit(0);
}
int main(){
	printf("enter the expression\n");
	yyparse();
	printf("valid expression \n");
	return 0;
}
