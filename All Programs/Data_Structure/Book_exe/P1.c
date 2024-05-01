// Write a program to read 10 integers. Display these numbers by printing three numbers in aline separated ny commos.
#include<stdio.h>
#include<conio.h>
int main(){
	int num[10],i=0,x=0,j;
	printf("\nPlease Enter a 10 digit number : ");
	 for(i=0;i<10;i++){
	 	scanf("%d",&num[i]);
	 }
	 i=0;
	 for(j=0;j<10/3;j++){
	 	while(x<3){
	 		printf("%d ",num[i]);
	 		x++;i++;
		 }
		 printf("\n");
		 x=0;
	 }
	printf("%d",num[i]);
}