// Write a C program to input week number and print week day.
#include<conio.h>
#include<stdio.h>
int main()
{
	int week_number;
	printf("Please enter week number\n");
	scanf("%d",&week_number);
	if(week_number==1)
	{
		printf("Monday\n");
	}
	else if(week_number==2)
	{
		printf("Tuesday\n");
	}
	else if(week_number==3)
	{
		printf("Wednesday\n");
	}
	if(week_number==4)
	{
		printf("Thursday\n");
	}
	else if(week_number==5)
	{
		printf("Friday\n");
	}
	else if(week_number==6)
	{
		printf("Saturday\n");
	}
	else if(week_number==7)
	{
		printf("Sunday\n");
	}
	return 0;
}