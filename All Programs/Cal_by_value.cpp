//   Call by Value.
#include<stdio.h>
#include<conio.h>
void swapv (int *, int *);
int  main(){
	int a=10,b=30;
	swapv(&a,&b);
	printf("a = %d , b = %d\n",a,b);
	return 0;
}
void swapv (int *a, int *b){
	int t;
    t = *a;
	*a = *b;
	*b = t;
	
}