// WAP to find the largest and lowest element in an Array.
#include<stdio.h>
int main(){
	int size,i,max,min;
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	int A[size];
	printf("Please enter %d elements for an Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	printf("Displaying all elements of an Array:\n");
	for(i=0;i<size;i++){
		printf("%d, ",A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=1;i<size;i++){
		if(A[i]>max){
			max=A[i];
		}
		if(A[i]<min){
			min=A[i];
		}
	}
	printf("\nThe Largest element in Array is = %d\n",max);
	printf("The Lowest element in Array is = %d\n",min);
		return 0;
}