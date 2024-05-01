// Write a C program to count total number of even and odd elements in an array.
#include<stdio.h>
int main(){
	int size,odd=0,even=0;
	printf("Please enter the size of an array:\n");
	scanf("%d",&size);
	int A[size],i;
	printf("Please enter the %d elements for an array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	/*  to check no even or odd*/
	for(i=0;i<size;i++){
		if(A[i]%2==0){
			even++;
		}
		else 
		{
			odd++;
		}
	}
	printf("The total no of Even numbers is = %d\n",even);
	printf("The total no of Odd numbers is = %d\n",odd);
	return 0;
}