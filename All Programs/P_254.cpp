// // Write a C program to find the sum of lower triangular matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
	int row,col,i,j,flag=1,sum=0;
	printf("Please enter no of row and column of matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col];
	printf("Please enter the elements of matrix %dx%d :\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Your entered matrix is below:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",M1[i][j]);
		}
		printf("\n");
	}
        	/*
             * If elements above main diagonal(col>row)
             * is not equal to zero(array[row][col]!=0)
             */
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j>i&&M1[i][j]!=0){
				flag=0;
			}
		}
	}
	if(flag==1){
		printf("\nYour Lower Matrix is given below:\n");
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",M1[i][j]);
			sum+=M1[i][j];
		}
		printf("\n");
	}
	}
	else 
	{
		printf("\nYour Entered matrix is not Lower Matrix:\n");
	}
	printf("\nThe sum of all lower triangle is = %d",sum);
}