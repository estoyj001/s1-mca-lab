#include <stdio.h>
#include <stdlib.h>
int size = 10;
int q[10],front = -1, rear = -1,item;

void enq(){
	if(rear==size-1)printf("\nQueue Overflow / Queue is full, try dequeueing some elements first!");
	else {	
		if(front==-1) front=0;
		rear++;
		printf("\nEnter element you want to enqueue : ");\
		scanf("%d",&item);
		q[rear] = item;
		printf("\nElement succesfully enqueued!");
	}
}

void dq(){
	if(front==-1)printf("\nQueue underflow/Queue is empty, try enqueueing some elements first!\n");
	else{	
		
		item = q[front];
		front++;
		printf("\nSuccessfully dequeued!");
		if(front>rear) front=rear=-1;
		
	}}
	
void display(){

	if(front==-1)printf("\nQueue underflow/Queue is empty, try enqueueing some elements first!\n");
	else{	
		printf("\nYour queue is : ");
		for(int i=front;i<=rear;i++){
			printf(" %d ",q[i]);
		}
	}
}


void main(){
	int c;
	while(1){
	printf("Enter Your Choice : \n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	scanf("%d",&c);
	
	
	switch(c){
		case 1 : enq();
			break;
		case 2 : dq();
			break;
		case 3 : display();
			break;
		case 4 : exit(0);
		default : printf("\nWrong Choice, Try Again!!"); 
	}
	}
	
	
}

