// Write a C program to find first and last digit of a number.
#include<conio.h>
#include<stdio.h>
int main(){
	int number,num,fd,ld;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	fd=number;
	while(fd>=10){
		fd=fd/10;
	}
	ld=number%10;
	printf("The First digit is= %d\n",fd);
	printf("The Last digit is= %d\n",ld);
	return 0;
}