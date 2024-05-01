         // Wild POINTER -- wild pointer are also known as uninitialized pointer
// Thease pointera usually point to some arbitrary memory location
// and may cause a program to crash or misbehave        
#include"stdio.h"
int main(){
	int *ptr;
	*ptr= 10;
	return 0;
}









