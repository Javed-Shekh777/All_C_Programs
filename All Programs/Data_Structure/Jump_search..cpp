#include<stdio.h>
#include<conio.h>
#include<math.h>
void Jump_search(int [],int,int,int,int);
int main(){
	int low=0,n,num,high,ar[20],i;
	printf("\nPlease Enter the size of An Array : ");
	scanf("%d",&n);
	printf("\nPlease Enter %d elements of Array : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nEnter number to search  : ");
	scanf("%d",&num);
	printf("\nPrinting Array : \n");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	Jump_search(ar,low,n-1,n,num);
	 
}

void Jump_search(int ar[],int low,int high,int n,int num){
	int step,i;
	step=sqrt(n);
	for(i=0;i<step;i++){
		if(ar[step]>num){
			high=step-1;
		}
		else {
			low=step+1;
		}
	}
	for(i=low;i<=high;i++){
		if(ar[i]==num){
			printf("\n%d number found At Index[%d]",num,i);
			break;
		}
	}
	
}