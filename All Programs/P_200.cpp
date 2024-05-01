// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int flag=1;
void prime(int);
int armstrong(int);
void perfect(int);
int main(){
	int arm,num;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	prime(num);
//	arm=armstrong(num);
if(arm==1){
//	printf("It is armstrong number:\n");
}
else 
{
//	printf("It is not Armstrong Number:\n");
}
//	perfect(num);
	return 0;
}
void prime(int num){
	for(int i=2;i<num;i++){
		if(num%i!=0){
			printf("\nIt is Prime Number:%d\n",num);
		}
	}
}
int armstrong(int num){
	int temp,sum=0,turn=0,re;
	temp=num;
	while(num>0){
		re=num%10;
		turn++;
		num=num/10;
	}
	num=temp;
       while(num>0){
        re=num%10;
       	sum=sum+pow(re,turn);
       	num=num/10;
	   }
	   if(temp==sum){
	   	return 1;
	   }
	   else 
	   {
	   	return 0;
	   }
}
void perfect(int num){
	int sum=0,temp=num;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(temp==sum){
//		printf("\nIt is Perfect Number:\n");
	}
	else {
//		printf("\nIt is Not Perfect Number:\n");
	}
	
}