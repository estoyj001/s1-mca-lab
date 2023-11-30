%{
#include<stdio.h>
%}

%%
"abc" printf("ABC");
.|\n|\t  printf("%s",yytext);
%%

int main()
{
	yylex();
	return 0;
}
