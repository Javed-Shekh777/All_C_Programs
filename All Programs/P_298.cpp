// Write a C program to create, initialize and use pointers.
// Write a C program to add two numbers using pointers.
#include<stdio.h>
int main(){
	int *a,*b,x,y;
	a=&x; 
	b=&y;
	printf("Please enter two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("The Sum is = %d",x+y);
	printf("\nPlease enter the two numbers in pointer:\n");
	scanf("%d%d",a,b);
	printf("\nThe Sum is = %d",*a+*b);
	return 0;
	
}