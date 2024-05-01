//   Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
#include<conio.h>
int main()
{
	float length;
	printf("Please enter the length in centimeter:\n");
	scanf("%f",&length);
	printf("The length in Meter is=%f mater\n",length/100);
	printf("The length in Meter is=%f kilometer\n",length/100000);
	return 0;
	
}