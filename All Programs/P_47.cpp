// Write a C program to check whether an alphabet is vowel or consonant using switch case..
#include<conio.h>
#include<stdio.h>
int main(){
	char ch;
	printf("Please enter a Character:\n");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
		case 'A' :
	     	printf("It is Vowel:\n");
		    break ;	
		case 'e' :
		case 'E':
		    printf("It is Vowel:\n");
		    break ;
		case 'i':
		case 'I':
		    printf("It is Vowel:\n");
		    break ;
		case 'o':
		case 'O':
		    printf("It is Vowel:\n");
		    break ;
		case 'u':
		case 'U':
		    printf("It is Vowel:\n");
			break ;
		default :
		    printf("It is Consonant:\n");
			break ;	    
	};
	return 0;
}