// Write a C program to check whether a number is negative, positive and zero.
#include<conio.h>
#include<stdio.h>
int main()
{
	int x;
	printf("Please Enter a number\n");
	scanf("%d",&x);
	x>0?printf("This number is Positive\n"):(x<0)?printf("This number is Negative\n"):printf("This number is Zero");
	getch();
	return 0;
}
