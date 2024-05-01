// Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
#include<conio.h>
int main()
{
	float length,breadth,perimeter;
	printf("Please enter the length and breadth of Rectangle :\n");
	scanf("%f%f",&length,&breadth);
	printf("The perimeter of RECTANGLE is = %0.2f square unit",2*(length+breadth));
	return 0;
}