// Write a C program to find determinant of a matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,det,a,b,c,d,e,f,g,h,I;
	printf("Please enter the no of row and column for matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],size;
	size=row*col;
	printf("Please enter the elements of matrix %dx%d :\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Your entered matrix is below:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	/*
     * Used as a temporary variables to make calculation easy
     * |         |
     * | a  b  c |
     * | d  e  f |
     * | g  h  i |
     * |         |
     */
     if(size>4){
     a=M1[0][0];
     b=M1[0][1];
     c=M1[0][2];
     d=M1[1][0];
     e=M1[1][1];
     f=M1[1][2];
     g=M1[2][0];
     h=M1[2][1];
     I=M1[2][2];
	det = (a*(e*I - f*h)) - (b*(d*I - f*g)) + (c*(d*h - e*g));
	printf("\nThe Determinant of matrix is = %d",det);
}
else 
{
	det = (M1[0][0] * M1[1][1]) - (M1[0][1] * M1[1][0]);

    printf("Determinant of matrix A = %ld", det);
}
	
     
}