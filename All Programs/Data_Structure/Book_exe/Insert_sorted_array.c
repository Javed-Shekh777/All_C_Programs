/* Write a program to insert a number in an array that is already sorted in ascending order. */
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,n,val;
	printf("\nPlease Enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array  : ",n);
	for(i=0;i<n;i++){
		printf("\nEnter Index[%d] Data : ",i);
		scanf("%d",&ar[i]);
	}
	printf("\nEnter value to insert : ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(ar[i]>val){
		for(j=(n-1);j>=i;j--){
			ar[j+1]=ar[j];
			}
			ar[i]=val;
			break;
		}
	}
	n+=1;
	printf("\nAfter Inserting %d Data Array is : ",val);
	for(i=0;i<n;i++){
		printf("[%d] ",ar[i]);
	}
}