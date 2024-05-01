//  Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
void Even_Odd(int,int); //  NOT DONE
int main(){
	int lower, upper;
	printf("Please enter lower limit:\n");
	scanf("%d",&lower);
	printf("Please entr Upperr limit:\n");
	scanf("%f",&upper);
	Even_Odd(lower,upper);
	return 0;
}
void Even_Odd(int lower, int upper){
	if(lower>upper){
		return ;
	}
			printf("\nThe Even number is = %d ",lower);
		}
		else {
			printf("%d ",lower);
		}
	}
	Even_Odd(lower+2, upper);
}
