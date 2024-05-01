// Write a C program to input and print array elements using pointer.
#include<stdio.h>
int main(){
	int size,A[size],i,*t;
	t = A;
	printf("PLease enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for an Arary:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",(t+i));
	}
	printf("All array elements are below...:\n");
	for(i = 0; i<size; i++){
		printf("%d, ",*(t+i));
	}
	return 0;
}