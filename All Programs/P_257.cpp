// Write a C program to check Identity matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,flag=1;
	printf("Please enter the no of row and column for matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col];
	printf("Please enter the elements of matrix %dx%d:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	// Condition checking.
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j&&M1[i][j]!=1){
				flag=0;
			}
			else if(i!=j&&M1[i][j]!=0){
				flag=0;
			}
		}
	}
	// Printing the entered matrix.
	
	printf("Your entered matrix is below:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	// After checking condition printing the matrix.
	if(flag==1){
		printf("You entered right matrix :\n");
		printf("Your Identity Matrix is given below:\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d ",M1[i][j]);
			}
			printf("\n");
		}
	}
	else 
	{
		printf("Your entered matrix is Not a Identity Matrix:\n");
	}
}