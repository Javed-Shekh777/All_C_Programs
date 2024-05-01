// Write a C program to convert Octal to Decimal number system.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main(){
	int i=0,j=0,decimal,octal,oc,count=0,re;;
	printf("\nPlease Enter Octal number : ");
	 scanf("%d",&octal);
	 oc=octal;
	 while(octal>0){
	 	count++;
	 	re=octal%10;
	 	octal/=10;
	 }
	 for(i=0;i<=count;i++){
	 	decimal=decimal+(oc%10)*pow(8,i);
	 	j++;
	 	oc=oc/10;
	 }
	printf("\nDecimal value is : (%d)base10",decimal);
}