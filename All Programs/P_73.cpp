//  Write a C program to find power of a number using for loop.
#include<stdio.h>
#include<conio.h>
int main(){
	int num,power=1,Power;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	printf("Please enter power of above number:\n");
	scanf("%d",&Power);
	for(int i=1;i<=Power;i++){
		power=power*num;
	}
	printf("%d ^ %d is =%d",num,Power,power);
	return 0;
}