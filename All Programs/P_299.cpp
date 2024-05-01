// Write a C program to swap two numbers using pointers.
#include<stdio.h>
void swap(int *, int *);
int main(){
	int a,b;
	printf("PLease enter two number:\n");
	scanf("%d%d",&a,&b);
	printf("The number are below... : \n a = %d , b = %d\n",a,b);
	swap(&a,&b);
	printf("The Swap number are below... : \n a = %d , b = %d",a,b);
	return 0;
}
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}