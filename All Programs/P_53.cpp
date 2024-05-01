// Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
#include<conio.h>
int main(){
       int n,i;
       printf("Please for print all natural numers 1,2,3,4,5,6,7,.........\n");
       printf("\nPlease enter no of term n:\n");
       scanf("%d",&n);
       while(i<=n){
       	printf("%d\n",i);
       	i=i+1;
	   }
	   return 0;
 }