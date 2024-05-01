// Pointer Checking in 06/09/2022.
#include<stdio.h>
int main(){
	int i=3;
	int *j;
	j=&i;
    printf("Address of i in i =%p\n",&i);
	printf("Address of i in j = %p\n",j);
	printf("Address of j in add j = %p\n",&j);
	printf("Value of j =%p\n",j);
	printf("Value of i=%d\n",i);
	printf("Value of i=%d\n",*(&i));
	printf("Value of i=%d\n",*j);
	return 0;
}