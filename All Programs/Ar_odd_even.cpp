// WAP to find odd and even numbers given an Array:
#include<stdio.h>
int main(){
	int size,A[size],i,O1=0,E1=0,Odd[size],Even[size];
	printf("Please enter the size of Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for an Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
		}
		for(i=0;i<size;i++){
		if(A[i]%2==0){
			Even[i]=A[i];
			E1++;
		}
		else {
			Odd[i]=A[i];
			O1++;
		}
	}
	printf("\nThe total no of Even number is = %d\n",E1);
	printf("\nThe Even total Even number in Array are displaying below>>>>>>>>\n");
	for(i=0;i<size;i++){
		printf("%d, ",Even[i]);
	}
		printf("\n The total no of Odd number is = %d\n",O1);
	printf("\nThe total Odd number in Array are displaying below>>>>>>>>>>>>\n");
	for(i=0;i<size;i++){
		printf("%d, ",Odd[i]);
	}
	
}