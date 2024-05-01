//  Write a C program to enter any number and calculate its square root.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float sq_root,number;
	printf("Please enter the number:\n");
	scanf("%f",&number);
	sq_root=sqrt(number);
	printf("The squate root of %f  is = %0.3lf",number,sq_root);
	return 0;
}