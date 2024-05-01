// Write a C program to count frequency of each element in an array.
#include<stdio.h>
int main(){
	int i,size,count=0,j,A[size],freq[size];
	printf("Please enter the size of an Array:\n");
	scanf("%d",&size);
	printf("Please enter %d elements for An Array:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	/* to cheking frequency of each an array element. */
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(A[i]==A[j]){
				count++;
				freq[j]=0;
			}
			
		}
		if(freq[i]!=0){
			freq[i]=count;
		}
	}
	printf("Print all elements frequencies:\n");
	for(i=0;i<size;i++){
		printf("%d, ",freq[i]);
	}

	
}