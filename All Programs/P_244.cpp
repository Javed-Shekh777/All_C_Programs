//Write a C program to perform Scalar matrix multiplication.
#include<stdio.h>
int main(){
	int row,col,i,j,num;
	printf("Please entr the no of Row and Column of Matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col],re[row][col];
	printf("Please enter the elements of First matrix %d:\n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Please enter a number to multiply matrix:\n");
	scanf("%d",&num);
	printf("Your first matrix is:\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	

	printf("\nThe Resultant of Scalar number multiply matrix is :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			
			printf("%d ",num*M1[i][j]);
		}
		printf("\n");
	}
	return 0;
}