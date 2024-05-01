// Write a C program to copy one array to another using pointers.
#include<stdio.h>
int main(){
	int size,A[size],B[size],*a,i,*b;
	a = A; b=B;
	printf("PLease enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for an Arary:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",(a+i));
	}
	for(i=0;i<size;i++){
		*(b+i)=*(a+i);
	
	}
	printf("All array elements are below...:\n");
	for(i = 0; i<size; i++){
		printf("%d, ",*(a+i));
	}
		printf("\nAfter copying All array elements are below...:\n");
	for(i = 0; i<size; i++){
		printf("%d, ",*(b+i));
	}
	return 0;
}