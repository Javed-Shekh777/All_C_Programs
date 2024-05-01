// WAP tp merge two array into one Array.
#include<conio.h>
#include<stdio.h>
int main(){
	int A1[5],A2[5],AS[10],i,j;
	printf("Please enter 5 elements for First Array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&A1[i]);
	}
	printf("Please enter 5 elements for Second Array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&A2[i]);
	}
	printf(" First Array is:\n");
	for(i=0;i<5;i++){
		printf("%d, ",A1[i]);
	}
	printf(" Second Array is:\n");
	for(i=0;i<5;i++){
		printf("%d, ",A2[i]);
	}
	for(i=0;i<5;i++){
			AS[i]=A1[i];
			AS[i+5]=A2[i];
	}
	for(i=0;i<5;i++){
		AS[i+5]=A2[i];
	}
	printf("Merged array is :\n");
	for(i=0;i<10;i++){
		printf("%d, ",AS[i]);
	}
	return 0;
}
