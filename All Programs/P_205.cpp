//  Write a C program to find power of any number using recursion.
#include<stdio.h>
double pow(double , int);
int main(){
	double base,power;
	int expo;  
	/* Input base and Exponent from User.  */
	printf("Please enter base number: \n");
	scanf("%lf",&base);
	printf("Please enter exponent of number: \n");
	scanf("%d",&expo);
	/* Call Pow Function */
	power = pow(base,expo);
	printf("%.2lf ^ %d = %f",base,expo,power);
	return 0;
}
/**
 * Calculate power of any number.
 * Returns base ^ expo
 */
double pow(double base,int expo){
	/* Base condition.*/
	if(expo==0){
		return 1;
		}
	else if(expo>0){
		return base * pow(base,expo-1);	
		}
	else 	
	{
		return 1/pow(base, -expo);
		}	
	
}