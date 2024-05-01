// Write a C program to input any character and check whether it is alphabet, digit ,special character.
#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("Please enter a character\n");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("The character is an AlPHABET\n");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("The character is a DIGIT\n");
	}
	else 
	{
		printf("The character is a Special Character\n");	
	}
	return 0;
}