/*  Write a program to prepare a grocery bill. Enter 
the name of the items purchased, quantity in which 
it is purchased, and its price per unit. Then display 
the bill in the following format:
************ B I L L ************
Item Quantity Price Amount
––––––––––––––––––––––––––––––––––––––––––––––––
–––––––––––––––––––––––––––––––––––––––––––––––––
Total Amount to be paid
––––––––––––––––––––––––––––––––––––––––––––––––  */

#include<stdio.h>
#include<conio.h>
int main(){
	int quantity[20],i,n;
	char item[100];
	float paid,price[10];
	printf("\nHow many item are buing :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("\nEnter Details of %d Item. ",i);
	printf("\nPlease Enter name of Item : ");
	fflush(stdin);
	gets(item);
	fflush(stdin);
	printf("\nPlease Enter no of Pieces :");
	scanf("%d",&quantity);
	printf("\nEnter One piece quantity : ");
	scanf("%f",price);
}   
	printf("\n\n\n****************************** GLOCERY BILL *********************************\n");
	printf("\t Item Quantity Price Amount");
	printf("\n---------------------------------------------------------------------------------");
    printf("\nItem name\t Quantity\tPieces\tAmount");
    for(i=1;i<n;i++){
	printf("%s\t%f\t%d\t%f",item,price[i]*quantity[i],quantity);
}
}