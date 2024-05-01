/*  In a small company there are five salesmen. Each salesman is supposed to sell three 
products. Write a program using a 2D array to print (i) the total sales by each salesman 
and (ii) total sales of each item. */

#include<stdio.h>
#include<conio.h>
void main(){
	int sales[5][3],i,j;
	printf("\n Enter Data Of Salesman : ");
	printf("\n\t********************\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("\nEnter sales of 3 items sold by Salesman %d : ",i+1);
			scanf("%d",&sales[i][j]);
		}
	}
	//  The total sales by each salesman 
	int total_sales=0;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			total_sales+=sales[i][j];
		}
		printf("\nTotal sales by Salesman %d is = %d",i+1,total_sales);
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			total_sales+=sales[i][j];
		}
		printf("\nThe Total Sales on item %d = %d",i+1,total_sales);
	}
}