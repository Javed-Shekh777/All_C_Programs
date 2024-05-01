//   Write a C program to enter two numbers and find their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("Please Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	printf("The Sum of two numbers is=%d",num1+num2);
	getch();
	return 0;
}