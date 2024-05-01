// Write a C program to swap two arrays using pointers.
#include<stdio.h>
int main(){
	int size,*a,*b;
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	int A[size],B[size],C[size],i;
	a = A;
	b = B;
	printf("Please enter %d elements for First Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",(a+i));
	}
	printf("\nPlease enter %d elements for Second Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",(b+i));
	}
	printf("Displaying %d elements of First Array:\n",size);
	for(i=0;i<size;i++){
		printf("%d, ",*(a+i));
	}
	printf("\nDisplaying %d elements of Second Array:\n",size);
	for(i=0;i<size;i++){
		printf("%d, ",*(b+i));
	}
	for(i=0;i<size;i++){
		int k;
		k = *(a+i);
		*(a+i) = *(b+i);
		*(b+i) = k;
		
	}
	printf("\n\nDisplaying %d elements of First Array after swaping:\n",size);
	for(i=0;i<size;i++){
		printf("%d, ",*(a+i));
	}
	printf("\n\nDisplaying %d elements of Second Array afterswaping:\n",size);
	for(i=0;i<size;i++){
		printf("%d, ",*(b+i));
	}
	return 0;
}