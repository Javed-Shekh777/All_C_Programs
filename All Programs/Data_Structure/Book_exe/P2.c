/* Write a program to print the count of even numbers 
between 1–200. Also print their sum */

#include<stdio.h>
#include<conio.h>
int main(){
	int sum=0,i,count=0;
	for(i=1;i<=200;i++){
		if(i%2==0){
			count++;
			sum+=i;
		}
	}
	printf("\nThe Total Sum is = %d",sum);
	printf("\nThe Total Even numbers is : %d",count);
}