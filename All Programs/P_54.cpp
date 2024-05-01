// Write a C program to print all natural numbers in reverse (from n to 1). - using while
#include<stdio.h>
#include<conio.h>
int main(){
	 int n;
       printf("Please for print all natural numers n,(n-1),(n-2),....7,6,5,4,3,2,1,0\n");
       printf("\nPlease enter no of term n:\n");
       scanf("%d",&n);
       printf("\n");
       int i=n;
       while(i>=0){
       	printf("%d\n",i);
       	i=i-1;
	   }
	   return 0;
}