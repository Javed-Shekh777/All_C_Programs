//   Write a C program to find one's complement of a binary number.
#include<stdio.h>
#include"conio.h"

int main(){
	int num,a[100],i=0,count=-1;
	printf("\nPlease enter a Decimal number : ");
	scanf("%d",&num);
	printf("Main number is : %d\n",num);
	i=0;
	while(num>0){
		a[i]=num%2;
		num=num/2;
		count++;
		i++;
	}
	printf("\nBinary number is : ");
	for(i=count;i>=0;i--){
	printf("%d ",a[i]);
	if(a[i]==1){
		 a[i]=0; }
		 else {
		 	a[i]=1;
		 }
	} 
	printf("\n\nOne's Complement is : ");
	for(i=count;i>=0;i--){
	printf("%d ",a[i]);
}
}

