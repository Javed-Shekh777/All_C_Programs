//  Write a C program to find the maximum between three numbers.
#include<stdio.h>
#include<conio.h>
int main(){
	int x,y,z;
	printf("Please enter the three numbers\n");
	scanf("%d %d %d",&x, &y,&z);
	(x>y&&x>z)?printf( "%d is greater than %d and %d",x,y,z):(y>z)?printf( "%d is greater than %d and %d",y,z,x):printf( "%d is greater than %d and %d",z,y,x);
	getch();
}