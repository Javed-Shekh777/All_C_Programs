//  Write a C program to convert Decimal to Binary number system.
#include<stdio.h>
#include<conio.h>

int main(){
	int num,bnry[100],i=0,count=-1;
	printf("\nPlease Enter a number : ");
	scanf("%d",&num);
	while(num>0){
		bnry[i]=num%2;
		num/=2;
		count++;
		i++;
	}
	printf("Binary Number is : ");
	for(i=count;i>=0;i--){
		printf("[%d]",bnry[i]);
	}
}