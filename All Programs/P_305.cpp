// Write a C program to access two dimensional array using pointers.
#include<stdio.h>
int main(){
	int row,column,A[3][3],i,j;
	/*printf("Please enter the size of two dimensional Array:\n");*/

	printf("PLease enter %d elements for two dimensional Array:\n",row*column);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",(*(A+i)+j));
		}
	}
	printf("Displaying  elements of two dimensional Array:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d",*(*(A+i)+j));
		}
	}
}