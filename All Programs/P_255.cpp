// Write a C program to find transpose of a matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j;
	printf("Please enter no of row and column of mam=trix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col];
	printf("Please enter the elements of matrix %dx%d:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	// transposing elements .
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			M2[j][i]=M1[i][j];
		}
	}
	printf("Your entered matrix is given below:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",M1[i][j]);
		}
		printf("\n");
	}
	printf("\nYour Transposed Matrix is below:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",M2[i][j]);
		}
		printf("\n");
	}
}