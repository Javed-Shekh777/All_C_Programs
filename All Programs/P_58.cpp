// Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
#include<conio.h>
int main(){
       int n,i,sum=0;
       printf("The Sum of all natural numers 1,2,3,4,5,6,7,.........\n");
       printf("\nPlease enter no of term n:\n");
       scanf("%d",&n);
       i=0;
       while(i<=n){
       	sum=sum+i;
       	i=i+1;
	   }
	   printf("The Sum of All natural numbers is = %d",sum);
	   return 0;
 }