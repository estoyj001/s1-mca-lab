#include <stdio.h>
void main(){
	int a[10],b;
	printf("Enter 10 elements to your array : ");
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<10;i++){
		int j = i+1;
		int temp;
		for(j=0;j<10;j++){
		if(a[j]>a[i]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		} 
		}
		
	}
	printf("\n Sorted version of your array is : ");
	for(int i=0;i<10;i++){
		printf(" %d ",a[i]);
	}
}
