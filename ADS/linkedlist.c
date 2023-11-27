#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
}*head = NULL;

void create(int val){
	if(head==NULL){
		head = malloc(sizeof(struct node));
		head->data = val;
		head->next=NULL;
	}
	else{
		
	}
	
}

void insertbeg(int val){
	if(head==NULL){
		create(val);
	}
	struct node* newnode = malloc(sizeof(struct node));
	newnode->next = head;
	newnode->data = val;
	head = newnode;
	
}

void append(int val){
	struct node* temp = head;
	struct node* newnode = malloc(sizeof(struct node*));
	newnode->next = NULL;
	newnode->data = val;
	if (head == NULL) {
        head = newnode;
        return;
    }
	while(temp->next!=NULL){
		temp = temp->next;
	
		
	}
	temp->next = newnode;
}

void insertpos(int val,int pos){
	struct node* temp = head;
	for(int i=1;i<pos-1;i++){
		temp=temp->next;	
	}
	struct node* newnode = malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = temp->next;
	temp->next=newnode;
	
	
	
}

void printll(){
	printf("Contents of your linked list are : ");
	struct node* temp = head;
	while(temp!=NULL){
		printf(" %d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


int main(){
	int c,val,pos;
	
	while(1){
	printf("Choose An Option :\n1.Create A Linked List\n2.Insert At Beginning\n3.Insert At End (Appending)\n4.Insert At Desired Position\n5.Print Your Linked List\n");
	
	scanf("%d",&c);
	
	switch(c){
		case 1 : printf("\nEnter Value For Your First Element : ");
		scanf("%d",&val);
		create(val);
		break;
		
		case 2 : printf("\nEnter Value To Be Inserted At Beginning : ");
		scanf("%d",&val);
		insertbeg(val);
		break;
		
		case 3 : printf("\nEnter Value To Append : ");
		scanf("%d",&val);
		append(val);
		break;
		
		case 4 : printf("\nEnter Value and Position to Insert : ");
		scanf("%d %d",&val,&pos);
		insertpos(val,pos);
		break;
		
		case 5 : 
		printll();
		break;
		
		default : printf("Invalid Input, Try Again!");
		return 0;
	}
	}
	
	
}
