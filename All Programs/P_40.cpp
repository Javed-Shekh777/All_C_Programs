// Write a C program to find maximum between two numbers using conditional operator.
#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,max;
	printf("Please enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	max=(num1>num2)?num1:num2;
	printf("The greatest number between %d and %d is =%d",num1,num2,max);
	return 0;
}