// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int sumnaturalnumbers(int , int);
int main(){
	int lower,upper, sumnatural;
	printf("Please  enter lower limit:\n");
	scanf("%d",&lower);
	printf("Please enter upper limit:\n");
	scanf("%d",&upper);
	sumnatural=sumnaturalnumbers(lower , upper);
	printf("The Sum of All natural numbers between %d and %d is = %d ",lower,upper,sumnatural);
	return 0;
}
int sumnaturalnumbers(int lower , int upper){
	if(lower>upper){
		return 0;
	}
	else 
	{
	   return lower + sumnaturalnumbers(lower+1, upper);
	}
	
	
}