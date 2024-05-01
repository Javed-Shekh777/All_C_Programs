// Write a C program to copy all elements from an array to another array.
#include<stdio.h>
int main(){
	int size,i;
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	int A[size],B[size];
	printf("Please enter the %d elements :\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<size;i++){
		B[i]=A[i];
	}
	printf("The all elements of second Array are below:\n");
	for(i=0;i<size;i++){
		printf("%d, 
		",B[i]);
	}
	return 0;
}