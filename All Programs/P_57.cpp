// Write a C program to print all odd number between 1 to 100.
#include<conio.h>
#include<stdio.h>
int main(){
	int i=1;
	printf("Program to print all even numbers between 1 to 100.");
	while(i<=100){
		if(i%2!=0){
			printf("%d\n",i);
		}
		i++;
	}
}