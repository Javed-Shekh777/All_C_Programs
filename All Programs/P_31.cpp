//  Write a C program to convert days into years, weeks and days.
#include<stdio.h>
#include<conio.h>
int main()
{
	int total_days, year, week, days;
	printf("Please enter the total days:\n");
	scanf("%d",&total_days);
	printf("The no of year in given days is =%d\n",total_days/365);
	printf("The no of week are =%d\n",(total_days%365)/7);
	printf("The no of Days is =%d\n",(total_days%365)%7);
	return 0;
}