// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Please enter a character\n");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("The given %c character is a UPPERCASE alphabet\n",ch);
	}
	else if(ch>=97&&ch<=122)
	{
		printf("The given %c character is a LOWERCASE alphabet",ch);
	}
	else 
	{
		printf("The entered character is not an alphabet\n",ch);
	}
	return 0;
}