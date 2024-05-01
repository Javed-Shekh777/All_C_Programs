/* Write a program to check whether any of the digits in a number appears more then once.*/
#include<stdio.h>
#include<conio.h>
void display_array(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nArray[%d] = %d",i,*(arr+i));
	}
}
void main(){
	int arr[10]={0},n,i,rem;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		if(arr[rem]==1){
			break;
		}
		arr[rem]=1;
		n/=10;
	}
	display_array(arr,10);	
}