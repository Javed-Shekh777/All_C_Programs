// Write a C program to check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Please enter a Character:\n");
	scanf("%c",&ch);
	(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')
	?printf("The entered Character is Alphabet:\n")
	:printf("The entered Chaaracter is Not Alphabet:\n");
	return 0;
	
}