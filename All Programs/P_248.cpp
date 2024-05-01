// Write a C program to find sum of minor diagonal elements of a matrix.
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
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i+j==2){
				sum=sum+M1[i][j];
			}
		}
		}
		// Printf al  diagonal elements.
		printf("\n");
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i+j==(col+1)-2){
				printf("%d ",M1[i][j]);
			}
		}
		}
	
		
		printf("\nThe Sum of all diagonal elements is = %d",sum);
	
}