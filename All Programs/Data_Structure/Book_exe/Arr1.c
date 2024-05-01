#include<stdio.h>
#include<conio.h>
#define SIZE 100
int main(){
	int ar[SIZE],n,i;
	printf("\nPlease Enter the size of Array  : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array  :\n\n",n);
	for(i=0;i<n;i++){
		printf("\nEnter Data For Index[%d]:\n",i);
		scanf("%d",&ar[i]);
	}
	printf("\nPrinting The Array : \n");
   for(i=0;i<n;i++){
   	printf("[%d] ",ar[i]);
   }
	
}