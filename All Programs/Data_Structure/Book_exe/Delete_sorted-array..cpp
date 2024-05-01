/* Write a program to delete a number from an array that is already sorted in ascending order */

#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,n,num;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array  : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",&ar[i]);
	}
	printf("\nEnter number to Delete that element : ");
	scanf("%d",&num);
	for(i=0;i<n-1;i++){
		if(ar[i]==num){
			for(j=i;j<(n-1);j++){
				ar[j]=ar[j+1];
			}
		}
		  
	}
	n-=1;
	printf("\nAfter Deleting  Array is : \n");
	for(i=0;i<n;i++){
		printf("[%d] ",ar[i]);
	}
}