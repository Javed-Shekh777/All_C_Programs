// Write a C program to print all Armstrong numbers between 1 to n.
#include<stdio.h>
#include<conio.h>
int main(){
	int armstr=0,num,re,temp,i;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	printf("Your all Armstrong numbers between 1 to %d are below:\n",num);
	for(i=1;i<=num;i++){
			temp=i;
	while(temp>0){
		re=temp%10;
		armstr=armstr+re*re*re;
		temp=temp/10;
	}                       //    NOT DONE
	if(i==armstr){
		printf("It %d",i);
	}
	else 
	{
		printf("It is Not Armstrong Number:\n");
	
	}
}
return 0;
}