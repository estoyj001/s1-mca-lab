#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
}*head = NULL;

void create(int val){
	head->data = val;
	head -> next = NULL;
}

void insertbeg(int val){
	if(head==NULL){
		create(val);
	}
	struct node* newnode = malloc(sizeof(struct node*));
	newnode->next = head;
	newnode->data = val;
	head = newnode;
	
}

void append(int val){
	struct node* temp = malloc(sizeof(struct node*));
	struct node* newnode = malloc(sizeof(struct node*));
	newnode->next = head;
	newnode->data = val;
	while(temp->next!=NULL){
		temp = temp->next;
	
		
	}
	temp->next = newnode;
}

void printll(){
	printf("Contents of your linked list are : ");
	struct node* temp = malloc(sizeof(struct node*));
	while(temp->next!=NULL){
		printf(" %d ",temp->data);
	}
}


int main(){
	create(5);
	append(10);
	append(15);
	printll();
	return 0;
	
}
