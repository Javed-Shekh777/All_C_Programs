//  Write a C program to convert Decimal to Hexadecimal number system.
#include<stdio.h>
#include<conio.h>

int main(){
	int num,i=0,re,count=-1;
	char hexadecimal[100];
	printf("\nPlease Enter a number : ");
	scanf("%d",&num);
	while(num>0){
		re=num%16;
		switch(re){
			case 10:
				hexadecimal[i]='A';
				break;
			case 11:
				hexadecimal[i]='B';
				break;
			case 12:
				hexadecimal[i]='C';
				break;
			case 13:
				hexadecimal[i]='D';
				break;
			case 14:
				hexadecimal[i]='E';
				break;
			case 15:
				hexadecimal[i]='F';
				break;
			default:
			    hexadecimal[i]=re;						
		}
		num=num/16;
		count++;
		i++;
	}
	printf("Hexadecimal Number is : ");
	for(i=count;i>=0;i--){
		if(hexadecimal[i]=='A'||hexadecimal[i]=='B'||hexadecimal[i]=='C'||hexadecimal[i]=='D'||hexadecimal[i]=='E'||hexadecimal[i]=='F')
		{
		printf("[%c] ",	hexadecimal[i]);
	}
		else {
		printf("[%d] ",	hexadecimal[i]);
		}
	}
}