//  Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
#include<conio.h>
int main(){
	float base,height;
	printf("Please Enter the base of triangle:\n");
	scanf("%f",&base);
	printf("Please enter the height of triangle:\n");
	scanf("%f",&height);
	printf("The Area of triangle is =%f sq, units\n",0.5*height*base);
	return 0;
}