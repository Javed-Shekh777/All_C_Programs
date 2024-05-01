// Write a C program to find all factors of a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int fact,number,i;
	printf("Please enter a number:\n");
	scanf("%d",&number);
	printf("The All factors of given number %d are below...\n",number);
	for(i=1;i<=number;i++){
		if(number%i==0){
			printf("\n%d",i);
		}
	}
	return 0;
}