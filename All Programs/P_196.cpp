// Write a C program to find cube of any number using function.
#include<stdio.h>
#include<conio.h>
void cube(int);
int main(){
	int x,y;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	cube(x);
	return 0;
}
void cube(int num){
	int cube=num;
		num=num*num*num;
	printf("The Cube is %d^3 is = %d",cube,num);
}