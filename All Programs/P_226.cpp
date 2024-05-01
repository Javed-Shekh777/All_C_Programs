// Write a C program to count total number of negative elements in an array.
#include<stdio.h>
int main(){
	int size,i,negative=0;
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	int A[size];
	printf("Please enter the %d elements :\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<size;i++){
	     if(A[i]<0){
	     	negative++;
		 }
	}
	printf("The total no of negative numbers in this Array is = %d",negative);
	return 0;
}