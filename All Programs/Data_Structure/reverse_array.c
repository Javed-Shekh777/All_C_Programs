/* Write a program  to print theh following numbers in reverse order 
          34 56 54 32 67 89 90 320 21  
       Assume that all these numbers are stored in an array. */
       
#include<stdio.h>
#include<conio.h>
 
 
void display_array(int *arr){
	int i;
	for(i=8;i>=0;i--){
		printf("\nArray[%d] = %d",i,*(arr+i));
	}
}
void main(){
	int arr[9]={34,56,54,32,67,89,90,32,21};
	display_array(arr);
}       
	      