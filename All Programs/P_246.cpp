// Write a C program to check whether two matrices are equal or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,flag=0;
	printf("Please enter the no of row and column of matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col];
	printf("Please enter elements of First matrix %dx%d :\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Please enter elements of Second matrix %dx%d :\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M2[i][j]);
		}
	}
	printf("Your First matrix of %dx%d are given below:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	printf("Your Second matrix of %dx%d are given below:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",M2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(M1[i][j]==M2[i][j]){
				flag=1;
			}
		}
	}
	if(flag==1){
		printf("Both Matrix are equal:\n");
	}
	else 
	{
		printf("Entered Both Matrix are not Equal:\n");
	}
}