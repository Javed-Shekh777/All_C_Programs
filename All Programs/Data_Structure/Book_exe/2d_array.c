/*   Write a program to print the elements of a 2D array. */
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[2][3]={{12,45,78},{60,20,90}},i,j;
	printf("\nPrinting the Two dimensional Array : \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nArray[%d][%d] = %d",i,j,ar[i][j]);
		}
	}
}