// // Write a C program to find sum of all Odd numbers between 1 to n.
#include<conio.h>
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("Program to print the Sum of all odd numbers between 1 to n.\n");
	printf("\nPlease enter the value of n:\n");
	scanf("%d",&n);
	while(i<=n){
		if(i%2!=0){
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\nThe Sum of All Odd natural numbers is = %d",sum);
}