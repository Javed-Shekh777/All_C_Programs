// Write a C program to convert Binary to Octal number system.
#include<stdio.h>
#include<conio.h>
//int main(){       NOT DONE
	int i=0,j=0,decimal ,bn,count=0,re;
	char bnry;
	printf("\nPlease Enter Binary number : ");
	gets(bnry);
	  i=0;
	  while(bnry[i]!='\0'){
	 	decimal=decimal+(bnry[i]%10)*pow(2,i);
	 	j++;
	 	bnry[i]=bnry[i]/10;
	 	i++;
	 }
	printf("\nDecimal value is : (%d)base10",decimal);
	

	 
	 
//	while(num>0){
//		octal[i]=num%8;
//		num/=8;
//		count++;
//		i++;
//	}
//	printf("Octal Number is : ");
//	for(i=count;i>=0;i--){
//		printf("[%d] ",octal[i]);
//	}
}