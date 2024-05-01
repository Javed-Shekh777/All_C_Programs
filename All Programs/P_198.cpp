// Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
#include<conio.h>
int min(int,int);
int max();
int main()
{
	int x,y,mi,ma;
	printf("Please enter two numbers:\n");
	scanf("%d%d",&x,&y);
	mi=min(x,y);
	printf("The Minimum number is = %d",x,y,mi);
	ma=max();
	printf("The Maximun number is = %d",ma);
	return 0;
}
int min(int x,int y){
	if(x>y){
		return y;
	}
	else {
		return x;
	}
}
int max(){
	int x,y;
	printf("\nPlease enter two numbers:\n");
	scanf("%d%d",&x,&y);
	if(x>y){
		return x;
	}
	else {
		return y;
	}
}