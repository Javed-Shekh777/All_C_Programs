// Write a program to check whether a given number is Odd or Even.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Please Enter a number\n");
	scanf("%d",&x);
	x%2==0?printf("This %d number is Even\n",x):printf("This %d number is Odd\n",x);
	return 0;
}