// Write a C program to search an element in array using pointers.
#include<stdio.h>
int main(){     /NOT DONE
	int size,A[size],i,num;
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for An Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",(A+i));
	}
	printf("PLease enter a number to search:\n");
	scanf("%d",&num);
	for(i=0;i<size;i++){
			if(num==*(A+i)){
				printf("Congratulation ! Number is Found.\n");
			}
	}
	if(i==size){
		printf("\nI am so sorry! This number %d is not Exist. In this An Array.\n",num);
	}
	return 0;
}