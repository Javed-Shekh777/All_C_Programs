// Write a C program to check Sparse matrix.
#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,i,j,total=0;
	printf("Please enter the no of row and column for matrix:\n");
	scanf("%d%d",&row,&col);
	int M1[row][col];
	printf("Please enter the elements of matrix %dx%d:\n",row,col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(M1[i][j]==0){
				total++;
			}
		}
	}
	if(total>=(i*j)/2){
        printf("\nThe given matrix is a Sparse matrix.");
    }
    else
    {
        printf("\nThe given matrix is not Sparse matrix.");
}
return 0;
}