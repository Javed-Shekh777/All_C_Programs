// Write a C program to reverse an array using pointers.
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
	printf("\nAll array elements are below...:\n");
	for(i = 0; i<size; i++){
		printf("%d, ",*(t+i));
	}
		printf("\n\nAll Reverse array elements are below...:\n");
	for(i=(size-1); i>=0; i--){
		printf("%d, ",*(t+i));
	}
}