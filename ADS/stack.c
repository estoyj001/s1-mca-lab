#include <stdio.h>
#include <stdlib.h>
#define size 10
int stack[size];
int item;
int top = -1;

int isEmpty(){
	if(top == -1) return 1;
	else return 0;
}
int isFull(){
	if(top>(size-1)) return 1;
	else return 0;
}
void pop(){
	if(isEmpty()==1) printf("\nStack is Empty, Push Elements first");
	else {
		stack[top] = item;
		printf("%d",item);
		top--;
		printf("\nElement is popped!");
	}
}
void push(){
	if(isFull()==1) printf("\nStack is Full, Pop Elements first");
	else {
		printf("\nEnter element to be pushed : ");
		scanf("%d",&item);
		top++;
		stack[top] = item;
		printf("\nElement is pushed into stack");
	}
}
void display(){
	if(isEmpty()==1) printf("\nNothing to display, Push some elements first");
	else{
		for(int i=0;i<=top;i++){
			printf("%d",stack[i]);
		}
	}
}

void peek(){
	if(isEmpty()==1) printf("\nNothing to display, Push some elements first");
	else{	
		printf("\nThe element at the top is : 
		 %d",i,stack[top]);
	}
}
					
void main(){
	int c;
	while(1){
	printf("\nEnter Your Choice : ");
	printf("\n1.Push \n2.Pop\n3.Display\n4.Peek\n5.Exit");
	scanf("%d",&c);
	switch(c){
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3 : display();
			break;
		case 4 : peek();
			break;
		case 5 : exit(0);
		
		default : printf("\nWrong Choice!")
			
			
	}}
}
