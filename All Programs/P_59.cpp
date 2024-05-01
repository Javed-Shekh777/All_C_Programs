// Write a C program to find sum of all even numbers between 1 to n.
#include<conio.h>
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("To find sum of all even numbers between 1 to n\n");
	printf("\nPlease enter the value of n:\n");
	scanf("%d",&n);
	printf("\nProgram to print all even numbers between 1 to n..");
	while(i<=n){
		if(i%2==0){
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\nThe sum of all even numbers between 1 to %d is =%d",n,sum);
}