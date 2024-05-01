// Write a C program to insert an element in an array.
#include<stdio.h>
int main(){
	int i,size,pos,num,A[size];
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for An Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	printf("Please enter a number to insert in array:\n");
	scanf("%d",&num);
	printf("Please enter Its Position between 1 to %d\n",size);
	scanf("%d",&pos);
	if(pos<=0 ||pos>size+1){
		printf("Invalid position! Please enter position between 1 and %",size);
	}
	else 
	{
	for(i=size;i>=pos;i--){
		A[i]=A[i-1];
	}
}
	printf("Printing numbers after inserting a number:\n");
	A[pos-1]=num;
	for(i=0;i<=size;i++){
		printf("%d, ",A[i]);
	}
	return 0;
}
