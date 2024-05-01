//    Null pointer.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr = (int*) malloc(2*sizeof(int));
	if(ptr==NULL){
		printf("Memory could not be allocated:\n");
	}
	else {
		printf("Memory allocated successfully:\n");
	}
	*ptr = NULL;
	printf("%d",*ptr);
	printf("\n%d", sizeof(NULL));
	return 0;
}


/*A dangling is a pointer which points
to some non-existing memory location.*/