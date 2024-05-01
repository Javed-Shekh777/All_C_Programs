//  Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,min,i,hcf=1;
	printf("Please enter any two number:\n");
	scanf("%d%d",&num1,&num2);
	min=num1>num2?num2:num1;
	for(i=1;i<=min;i++){
		if(num1%i==0&&num2%i==0){
			hcf=i;
		}
	}
	printf("The HCF of %d and %d is = %d",num1,num2,hcf);
	return 0;
}