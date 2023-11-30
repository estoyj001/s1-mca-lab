%{
int chars=0,words=0,spaces=0,lines=0;
%}
%%
[^ \t\n]+ {words++;chars=chars+yyleng;}
[ ] {spaces++;chars++;}
[\n] {lines++;chars++;}
%%
void main(){
//yyin=fopen("input.txt","r");
printf("Enter the text:");
yylex();
//fclose(yyin);

printf("The number of lines:%d\n",lines);
printf("The number of words:%d\n",words);
printf("The number of characters:%d\n",chars);
}

