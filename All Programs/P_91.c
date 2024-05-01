// Write a C program to convert Binary to Decimal number system.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main(){
	int i=0,j=0,decimal,bnry,bn,count=0,re;;
	printf("\nPlease Enter Binary number : ");
	 scanf("%d",&bnry);
	 bn=bnry;
	 while(bnry>0){
	 	count++;
	 	re=bnry%10;
	 	bnry/=10;
	 }
	 for(i=0;i<=count;i++){
	 	decimal=decimal+(bn%10)*pow(2,i);
	 	j++;
	 	bn=bn/10;
	 }
	printf("\nDecimal value is : (%d)base10",decimal);
}