// Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float side,area;
	printf("Please Enter the side of Equilateral Triangle:\n");
	scanf("%f",&side);
	area=(sqrt(3)*side*side)/4;
	printf("The AREA of equilateral triangle is= %f square units",area);
	return 0;
}