//  Write a C program to convert Decimal to Octal number system.
#include<stdio.h>
#include<conio.h>

int main(){
	int num,octal[100],i=0,count=-1;
	printf("\nPlease Enter a number : ");
	scanf("%d",&num);
	while(num>0){
		octal[i]=num%8;
		num/=8;
		count++;
		i++;
	}
	printf("Octal Number is : ");
	for(i=count;i>=0;i--){
		printf("[%d] ",octal[i]);
	}
}