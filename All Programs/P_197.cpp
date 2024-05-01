// Write a C program to find diameter, circumference and area of circle using functions.
#include<stdio.h>
#include<conio.h>
float PI  = 3.14;
void diameter(float);
int circum(float);
int area(float);
int main()
{
	float ra,cir,ara;
	printf("Please enter the radius of circle:\n");
	scanf("%f",&ra);
	diameter(ra);
	cir=circum(ra);
	printf("The Circumference of Circle is = %0.3f\n",cir);

	ara=area(ra);
	printf("The Area of Circle is = %f\n",ara);

	return 0;
}
void diameter(float ra){
	printf("The Diameter of Circle is = %f\n",2*ra);
}
int circum(float ra){
	 return (2*PI*ra);
}
int area(float ra){
	return (PI*ra*ra);
}