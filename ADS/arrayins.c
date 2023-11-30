#include <stdio.h>
int main(){
	int a[100],c,p,n,item;
	printf("Enter number of elements in your array : ");
	scanf("%d",&n);
	
	do
	{
		printf("\nEnter Your Choice : ");
		printf("\n1.Insert At Desired Position\n2.Insert At The Beginning\n3.Insert At The End\n4.Display Array Elements\n5.Exit");
		scanf("%d",&c);
	
	
		switch(c){
	
		case 1 : printf("\nEnter element : 
	
		case 2 : printf("\nEnter element : ");
			 scanf("%d",&item);
			 a[0] = item;
		 	break;
		 	
		 case 3 : printf("\nEnter element : ");
			 scanf("%d",&item);
			 a[n-1] = item;
		 	break;
	
		case 4 : printf("\nThe elements of your array are : ");
		 	for(int i=0;i<n;i++) printf(" %d ",a[i]);
		 	
		 	break;
		case 5 : return 0;
	}} while(1);
	
	
	
	
	
}
