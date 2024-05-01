// Write a C program to enter a number and print its reverse.
#include<stdio.h>
#include<conio.h>
int main(){
	int number,ld,re=0;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	while(number != 0)
    {
        re = (re * 10) + (number % 10);
        number /= 10;
    }

    printf("Reverse = %d", re);

    return 0;
}