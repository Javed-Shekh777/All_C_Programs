// Write a C program to add two matrices.
#include<stdio.h>
int main(){
	int row,col,i,j;
	printf("Please entr the no of Row and Column of Matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col],re[row][col];
	printf("Please enter the elements of First matrix %d:\n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Please enter the elements of Second matrix %d:\n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M2[i][j]);
		}
	}
	printf("Your first matrix is:\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	printf("\nYour Second matrix is:\n\n");
	for(i=0;i<row;i++){
		for( j=0;j<col;j++){
			printf("%d ",M2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			re[i][j]=M1[i][j]+M2[i][j];
		}
	}
	printf("\nThe Resultant of tow matrix is :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",re[i][j]);
		}
		printf("\n");
	}
	return 0;
}