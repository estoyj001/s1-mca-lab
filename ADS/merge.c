#include <stdio.h>
void main(){
	int n1,n2;
	printf("Enter number of elements for your 2 arrays : ");
	scanf("%d %d",&n1,&n2);
	int a[n1],b[n2];
	printf("\nEnter %d elements for your first array : ",n1);
	for(int i=0;i<n1;i++){
	scanf("%d",&a[i]);
			}
	printf("\nEnter %d elements for your second array : ",n2);
	for(int i=0;i<n2;i++){
	scanf("%d",&b[i]);
	}
	
	int n3 = n1+n2;
	int c[n3];
	
	
	printf("New Array after merging your 2 Arrays : ");
	for(int i=0;i<n1;i++){
		c[i] = a[i];					
		
	}
	
	for(int i=0,j=n1; i<n1,j<n3;i++,j++){
		 c[j] = b[i];
	}
	
	for(int i=0;i<n3;i++){
		printf(" %d ",c[i]);
	}
	
}

