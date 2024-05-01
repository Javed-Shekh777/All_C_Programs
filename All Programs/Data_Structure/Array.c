#include<stdio.h>
#include<conio.h>
#include<string.h>
void read_array(int arr[],int n){
	int i;
	for(i=0;i<10u;i++){
		printf("\n Array[%d] = %d",i,*(arr+i));
	}
}
void main(){
	int arr[]={[2]=2,3,4,[5]=5,[0]=1};
	read_array(arr,10);
}