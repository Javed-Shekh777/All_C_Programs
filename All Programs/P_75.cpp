// Write a C program to calculate factorial of a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int factorial=1,i,number;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		factorial=factorial*i;
	}
	printf("The Factorial of %d is = %d",number,factorial);
	return 0;
}