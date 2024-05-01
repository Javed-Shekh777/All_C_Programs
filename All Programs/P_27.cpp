//  Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
#include<conio.h>
int main()
{
	float radius,PI;
	printf("Please Enter the radius of Circle:\n");
	scanf("%f",&radius);
	printf("PLease enter the value of PI\n");
	scanf("%f",&PI);
	printf("The Diameter of Circle is =%f\n",2*radius);
	printf("The CIRCUMFERENCE of Circle is =%f\n",2*PI*radius);
	printf("The AREA of Circle is =%f\n",PI*radius*radius);
	return 0;
}