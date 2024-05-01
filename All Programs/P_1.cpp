//  Write a C program to find the maximum between two numbers.
#include<stdio.h>
#include<conio.h>
int main(){
	int x,y;
	printf("Please Enter two Number\n");
	scanf("%d %d",&x ,&y);
	x>y?printf( "%d is greater than %d",x,y):printf( "%d is greater than %d",y,x);
	getch();
}