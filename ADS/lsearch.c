#include <stdio.h>
void main(){
	int a[10],b,flag = 0;
	printf("Enter 10 elements into your array : ");
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter element you want to search for in your array : ");
	scanf("%d",&b);
	for(int i=0;i<10;i++){
		if(b == a[i]) flag++ ;
		}
	if(flag ==1) printf("Element found!");
		else {
		printf("Sorry, element not found");
	}
	}

