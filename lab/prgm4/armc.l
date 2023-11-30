%{
#include"y.tab.h"
#include<stdio.h>
%}
%%
[0-9]+ {return NUMBER;}
[_a-zA-Z]+[a-zA-Z_0-9]* { return ID; }
[\t]+ {;}
\n {return 0;}
. {return yytext[0];}
%%
int yywrap()
{
	return 1;
}
