// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int side1,side2,side3;
	printf("Please Enter three sides of triangle:\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	if((side1+side2)>side3){
		if((side2+side3)>side1){
			if((side3+side1)>side2){
				printf("Triangle is Valid:\n");
			}
			else
			{
					printf("Triangle is Not Valid:\n");
			}
		}
		else 
		{
			printf("Triangle is Not Valid:\n");
		}
	}
	else {
		printf("Triangle is Not Valid:\n");
	}
	return 0;
}