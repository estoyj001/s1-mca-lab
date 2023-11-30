#include <stdio.h>
int main(){
	int a[100],c,p,n;
	printf("Enter number of elements in your array : ");
	scanf("%d",&n);
	do
	{
		printf("\nEnter Your Choice : ");
		printf("\n1.Insert\n2.Delete\n3.Print/Display\n4.Exit");
		scanf("%d",&c);
	
	
		switch(c){
	
		case 1 : printf("\nEnter %d elements for your array : ",n);
			for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
				}
			printf("\nelements successfully inserted!");
			break;
	
		case 2 : printf("\nEnter position of element you want to delete : ");
			scanf("%d",&p);
			if(p>n){
				printf("\nposition does not exist in array!");
			
			}
			else {
		 	a[p] = a[n+1];
		 	printf("\n%d'th element successfully deleted",p);
		 	}
		 	break;
	
		case 3 : printf("\nThe elements of your array are : ");
		 	for(int i=0;i<n;i++) printf(" %d ",a[i]);
		 	
		 	break;
		case 4 : return 0;
	}} while(1);
	
	
	
	
	
}
