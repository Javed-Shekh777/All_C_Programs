//  Write a C program to find power of any number x ^ y.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,power;
	printf("Please Enter the number:\n");
	scanf("%d",&a);
	printf("Please enter the power of above number:\n");
	scanf("%d",&b);
	power=pow(a,b);
	printf("The power of is=%d",power);
	return 0;
}