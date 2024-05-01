// Write a C program to check whether a number is even or odd using conditional operator.
#include<stdio.h>
#include<conio.h>
int main(){
	int number;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	(number%2==0)?printf("The number %d is EVEN:\n")
	:printf("The number %d is ODD:\n");
	return 0;
}