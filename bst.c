#include <stdio.h>
#include <stdlib.h>


struct node{
	int key;
	struct node *left;
	struct node *right; 
}

struct node root = struct node(malloc(sizeof(struct node));

struct node root = NULL;


struct node* new(val){
	struct node* new = malloc(sizeof(struct node));
	new -> key = val;
	new -> left = NULL;
	new ->right = NULL; 
}

struct node* insert(struct node* root,int val){
	if(root ==NULL){
		return new(val);
	}
	else if(val>(root->key)){
		root -> right = insert(root->right);
	}
	else{
		root->left = insert(root->left);	
	}
	return root;
}

int main(){
	int val;
	printf("Enter element you want to insert in your linked list
}

