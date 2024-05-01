// Write a C program to interchange diagonals of a matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,temp;
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
		// Printf all major diagonal elements.
		printf("\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
			temp=M1[i][i];
			if(i+j==(col+1)-2){
				M1[i][i]=M1[i][j];
			M1[i][j]=temp;	
			}
		}
     }
		// Printf all minor diagonal elements.
		printf("\n");
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
   }
		
}