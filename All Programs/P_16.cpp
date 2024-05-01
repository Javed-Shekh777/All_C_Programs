// Write a C program to check whether the triangle is equilateral , isosceles or scalene triangle.
#include<stdio.h>
#include<conio.h>
int main(){
	float side_1,side_2,side_3;
	printf("Please Enter three sides of triangle:\n");
	scanf("%f%f%f",&side_1,&side_2,&side_3);
	if(side_1==side_2&&side_2==side_3){
		printf("The Triangle is EQUILATERAL:\n");
	}
	else if(side_1==side_2||side_2==side_3||side_3==side_1){
		printf("The Triangle is ISOSCELES:\n");
	}
	else 
	{
		printf("The Triangle is SCALANE:\n");
	}
	return 0;
}
