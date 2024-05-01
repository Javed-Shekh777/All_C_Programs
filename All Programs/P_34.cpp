//  Write a C program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
#include<conio.h>
int main()
{
	float angle_1,angle_2,angle_3;
	printf("Please Enter two angles of Triangle:\n");
	scanf("%f%f",&angle_1,&angle_2);
	angle_3=180-(angle_1+angle_2);
	printf("The Third angle of triangle is=%0.2f Degree\n",angle_3);
	return 0;
}