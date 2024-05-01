// Write a C program to convert Hexadecimal to Decimal number system.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main(){
	int i=0,j=0,decimal,hexa,hex,count=0,re;;
	 scanf("%d",&hexa);
	 hex=hexa;
	 while(hexa>0){
	 	count++;
	 	re=hexa%10;
	 	hexa/=10;
	 }
	 for(i=0;i<=count;i++){
	 	decimal=decimal+(hex%10)*pow(16,i);
	 	j++;
	 	hex=hex/10;
	 }
	printf("\nDecimal value is : (%d)base10",decimal);
}