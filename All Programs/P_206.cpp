// Write a C program to print all natural numbers between 1 to n using recursion.
#include<stdio.h>
void printnaturalnumber(int,int);
int main(){
	int lowerlimit,upperlimit;
    
    /* Input lower and upper limit from user */    
    printf("Enter lower limit: ");
    scanf("%d", &lowerlimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperlimit);

    printf("All natural numbers from %d to %d are: ", lowerlimit, upperlimit);
	/* calling function*/
	printnaturalnumber(lowerlimit, upperlimit);
	return 0;
}
void printnaturalnumber(int lowerlimit,int upperlimit){
	if(lowerlimit>upperlimit){
		return ;
	}
	else {
		printf("%d  ",lowerlimit);
	}
	printnaturalnumber(lowerlimit+1,upperlimit);
}