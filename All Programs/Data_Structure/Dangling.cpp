// Dangling Pointer
/*#include"stdio.h"
#include<conio.h>
#include<stdlib.h>
int main(){
	int *ptr = (int *)malloc(sizeof(int));
	printf("Hello World\n");
	printf("%d",ptr);
	free(ptr);
	printf("\n%d",*(ptr));
	printf("\n%d",ptr);
	ptr = NULL;
		printf("\n%d",*(ptr));
	return 0;
}*/


// Attention below code carefully.
#include<stdio.h>
int *fun(){
	int num  = 10;
	return &num;
}
int main(){
	int *ptr = NULL;
	ptr = fun();
	printf("%d", *ptr);
	return 0;
}
 