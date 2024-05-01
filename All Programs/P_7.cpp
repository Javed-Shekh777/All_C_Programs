// Write a c program to check whethe a given a character is an alphabet or not.
#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("Please enter a Character\n");
	scanf("%c",&ch);
	if(ch>64&&ch<90)
	{
	  printf("The %c is an Alphabet",ch);
}
	else if(ch>96&&ch<122){
			printf("The %c is an Alphabet",ch);
	     }
	     else 
	     {
	     	printf("The %c is Not an Alphabet",ch);
		 }
    return 0;
	
}