/* Write a program to insert a number at a given location in an array */
#include<stdio.h>
#include<conio.h>
int main(){
	int ar[20],i,j,n,val,pos;
	printf("\nPlease enter the size of Array : ");
	scanf("%d",&n);
	printf("\nEnter %d elements for Array : ",n);
	for(i=0;i<n;i++){
    	printf("\nEnter Index[%d] Data : ",i);
	    scanf("%d",&ar[i]);
    }
    printf("\nEnter the new value to Insert : ");
    scanf("%d",&val);
    printf("\nEnter the Position : ");
    scanf("%d",&pos);
    for(i=(n-1);i>=pos;i--){
    	ar[i+1]=ar[i];
	}
	ar[pos]=val;
	n+=1;
	printf("\nArray after Inserting %d number is :\n",val);
	for(i=0;i<n;i++){
		printf("[%d] ",ar[i]);
	}
         
}
