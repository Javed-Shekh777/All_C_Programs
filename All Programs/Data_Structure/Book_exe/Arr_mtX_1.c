/*   Write a program to fill a square matrix with value zero on the diagonals, 1 on the upper 
right triangle, and –1 on the lower left triangle. */
#include<stdio.h>
#include<conio.h>
void read_matrix(int [3][3],int);
void display_matrix(int [3][3],int);
void main(){
	int matrix[3][3],i,j,row;
	printf("\nEnter the no of Row for Square Matrix : ");
	scanf("%d",&row);
	read_matrix(matrix,row);
	display_matrix(matrix,row);
	 
}
void read_matrix(int matrix[3][3],int row){
 int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			 if(i==j){
			 	matrix[i][j]=0;
			 }
			 else if(i>j){
			 	matrix[i][j]=-1;
			 }
			 else {
			 	matrix[i][j]=1;
			 }
		}
	}
}

void display_matrix(int matrix[3][3],int row){
	 int i,j;
	for(i=0;i<row;i++){
		printf("\n");
		for(j=0;j<row;j++){
			printf("\t %d",matrix[i][j]);
		}
		 
	}
}