// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int fang,sang,tang,sum;
	printf("Please enter three angle of triangle\n");
	scanf("%d %d %d",&fang,&sang,&tang);
	sum=fang+sang+tang;
	if(sum==180&&fang>0&&sang>0&&tang>0)
	{
		printf("Triangle is Valid\n");
	}
	else{
		printf("Triangle is NOT Valid\n");
	}
	return 0;
}