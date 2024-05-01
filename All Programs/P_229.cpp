// Write a C program to delete an element from an array at specified position.
#include<stdio.h>
int main(){
	int i,size,pos,num,A[size];
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for An Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	/* To give that position to delete that element.  */
	printf("Please enter Its Position between 1 to %d\n",size);
	scanf("%d",&pos);
	if(pos<0 || pos>size){
		printf("Invalid position! Please enter position between 1 to %d", size);
	}
	else {
	for(i=pos-1;i>size-1;i++){
		A[i]=A[i+1];
	        }
    }
	printf("Printing numbers after deleting:\n");
	size--;
	for(i=0;i<size;i++){
		printf("%d, ",A[i]);
	}
	return 0;
}
