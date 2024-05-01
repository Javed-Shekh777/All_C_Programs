// Write a C program to check whether a alphabet is vowel or consonent.
#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("Please enter a Alphabet\n");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
	   ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	   {
	   	printf("The given alphabet is Vowel %c",ch);
	   }
	   else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	   {
	   	printf("The given alphabet is Consonent %c",ch);
	   }
	   else {
	   	printf("The given Character is Not an alphabet %c",ch);
	   }
	   return 0;
}