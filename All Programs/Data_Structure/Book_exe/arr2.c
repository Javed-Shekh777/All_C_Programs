/*  Write a program to read an array of n numbers and then find the smallest number.   */
#include<stdio.h>
#include<conio.h>
void read_array(int [],int);
int find_small(int [],int );
void main(){
	int num[10],n,smallest;
	printf("\nEnter the size of Array : ");
	scanf("%d",&n);
	read_array(num,n);
	smallest=find_small(num,n);
	printf("\n The Smallest number in the array : %d",smallest);
 
}
void read_array(int num[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nArray[%d] : ",i);
		scanf("%d",&num[i]);
	}
}

int find_small(int num[],int n){
	int i,small=num[0];
	for(i=1;i<n;i++){
		if(num[i]<small){
			small=num[i];
		}
	}
	return small;
}