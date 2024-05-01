// Write a C program to find sum of each row and column of a matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,sum=0;
	printf("Please enter the no of row and column of matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col];
	printf("Please enter elements of Matrix %dx%d :\n",row,col);
	// entred matrix elements.
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	// Print All elements of Matrix.
	printf("Your Matrix of %dx%d are given below:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	// To find the sum of each row and print it.
	for(i=0;i<row;i++){
		sum=0;
		for(j=0;j<col;j++){
			sum=sum+M1[i][j];
		}
		printf("The Sum of Row no %d is = %d\n",(i+1),sum);
	}
	// To find the sum of each column and print it.
	for(i=0;i<row;i++){
		sum=0;
		for(j=0;j<col;j++){
			sum=sum+M1[j][i];
		}
		printf("The Sum of Column no %d is = %d\n",(i+1),sum);
	}
}