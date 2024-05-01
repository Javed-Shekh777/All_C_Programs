// Write a C program to find maximum between three numbers using conditional operator.
#include<conio.h>
#include<stdio.h>
int main(){
	int num1,num2,num3,max;
	printf("Please enter three numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	printf("The Greatest number among three numbers (%d, %d, %d) is=%d",num1,num2,num3,max);
	return 0;
}