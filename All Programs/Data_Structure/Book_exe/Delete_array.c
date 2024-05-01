/* Write a program to delete a number from a given location in an array */
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,n,loc;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array  : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",&ar[i]);
	}
	printf("\nEnter Location to Delete that element : ");
	scanf("%d",&loc);
	for(i=loc;i<n-1;i++){
		 ar[i]=ar[i+1];
	}
	n-=1;
	printf("\nAfter Deleting  Array is : \n");
	for(i=0;i<n;i++){
		printf("[%d] ",ar[i]);
	}
}