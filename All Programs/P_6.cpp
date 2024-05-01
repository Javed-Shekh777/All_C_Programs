//      Write a C program to check whether a given year is Leap year or Not.
#include<conio.h>
#include<stdio.h>
int main()
{
	int year;
	printf("Please enter a Year\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("This %d year is Leap Year\n",year);
	}
	else 
	{
		printf("This %d year is Not a Leap Year\n",year);
	}
	return 0;
 } 