// WAP to combine two shorted array in one shorted Array.
#include<stdio.h>
int main(){
	int A1[5],A2[5],AS[10],i,j,temp=0;
	printf("Please enter 5 elements for First Array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&A1[i]);
	}
	printf("Please enter elements for Second Array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&A2[i]);
	}
	printf("\n First Array is:\n");
	for(i=0;i<5;i++){
		printf("%d, ",A1[i]);
	}
	printf("\n Second Array is:\n");
	for(i=0;i<5;i++){
		printf("%d, ",A2[i]);
	}
	for(i=0;i<10;i++){
		AS[i]=A1[i];
		AS[i+5]=A2[i];
	}
	printf("\nThe merge array is below:\n");
	for(i=0;i<10;i++){
		printf("%d, ",AS[i]);
	}
	for(i=0;i<10;i++){
		int temp=0;
		for(j=i+1;j<10;j++){
			if(AS[i]>AS[j]){
				temp=AS[i];
				AS[i]=AS[j];
				AS[j]=temp;
			}
		}
	}
	
	printf("\nThe Total merge array is below:\n");
	for(i=0;i<10;i++){
		printf("%d, ",AS[i]);
	}
	return 0;
} 