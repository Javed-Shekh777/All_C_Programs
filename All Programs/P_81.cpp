// Write a C program to find all prime factors of a number.
#include<stdio.h>
#include<conio.h>
int main(){
	int j,flag,num,i;
	printf("Please enter a number:\n");
	scanf("%d",&num);
    for(i=0;i<=num;i++){
    	if(num%i==0){
    		flag=0;
    		for(j=2;j<i;j++){
    			if(i%j!=0){
    				flag=1;
    				//break;
				}
			}// NOT DONE  
		}
	}
	if(flag==1){
	   printf("%d",i);	
	}
return 0;
}