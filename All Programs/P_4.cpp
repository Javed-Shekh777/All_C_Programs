// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Please enter a number\n");
	scanf("%d",&x);
	if(x%5==0&&x%11==0){
		 	printf("This %d number is divisible by 5 and 11",x);
	}
	else 
	{
		printf("This %d number is Not divisible by 5 and 11",x);
}
	return 0;
}