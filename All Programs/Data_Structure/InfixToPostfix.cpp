#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
//
//int outPre(char ch){
//	 switch(ch){
//		case '+':
//	    case '-':
//	    	return 1;
//	    case '*':
//		case '/':
//		case '%':
//		    return 3;
//		case '^':
//		    return 5;
//		case '(':
//		return 100;			
//	}
//}
//int inPre(char exp){
//	switch(exp){
//		case '+':
//	    case '-':
//	    	return 2;
//	    case '*':
//		case '/':
//		case '%':
//		    return 4;
//		case '^':
//		    return 5;
//		case '(':
//		return 0;				
//	}
//}
//void push(char);
// 
//int Operand(char);
//int Operator(char);
//void InToPost(char*);
//
//int main(){
//	char exp[40];
//	printf("\nEnter a expression : ");
//	gets(exp);
//	InToPost(exp);
//}
//
//void InToPost(char *exp){
//	int i=0;
//	while(exp[i]!='\0'){
//		               // If it is operand
//		if(Operand(exp[i])){
//			printf("%c",exp[i]);
//		}
//		                     // If it is operator
//		else if(Operator(exp[i])){
//			if(top==-1||outPre(exp[i])>inPre(stack[top])){
//				push(exp[i]);
//			}
//			else {
//				while(top==-1||outPre(exp[i])<inPre(stack[top])){
//					printf("%c",stack[top]);
//					top--;
//				}
//				push(exp[i]);
//			}
//		}
//		
//		// Condition for Brackets 
////		else if(exp[i]=='('){
////			push(exp[i]);
////		}
//		else if(exp[i]==')'){
//			while(stack[top]!='('){
//				printf("%c",stack[top]);
//				top--;
//			// if opening bracket not appear then do it
//			if(top==-1){
//				printf("\nwrong expression");
//				exit(1);
//			}
//			top--;
//		}
//		i++;
//   }
//		
//		// pop the remaining expression 
//		while(top==-1){
//			if(stack[top]=='('){
//				printf("\nWrong expression");
//				exit(1);
//			}
//			printf("%c",stack[top]);
//			top--;
//		} 
//		i++;
//	}
//}
//
//int Operand(char exp){
//	if((exp>=65&&exp<=90)||(exp>=97&&exp<=122)){
//		return 1;
//	}
//	return 0;
//}
// 
//int Operator(char exp){
//	 return (exp=='+'||exp=='-'||exp=='*'||exp=='/'||exp=='^'||exp=='%'); 
//} 
//
//void push(char exp){
//	printf("\nPushed = %c",exp);
//	top++;
//	stack[top]=exp;
//}

/*
                                 Approach 
                                 
        1. If the input character is an operand, print it.
		2. If the input character is an operator --
		   a) If stack is empty push it to the stack.
		   b) If its precedence value is greater than the precedence value of the
		   character on the top, push it.
		   c) If its precedence value ia lower or equal then pop from stack and 
		   print while precedence of top cahr is more then the precedence value
		   of the input character.
		3. If the inout caharacter is ')' then pop and print until topp is '('.(Pop '(' but don't print it)
		4. If stack becomes empty before encountering '(' then it is invalid expression
		5. Repeat steps 1 - 4 until input expression is completely read.
		6. Pop the remaining elements from stack and print them.
		                     */  
							 
							 
							 
int main(){
	char exp[100];
	printf("\nEnter a expression : ");
	gets(exp);
	int i=0;
	while(exp[i]!='\0'){
		 if((exp[i]>=65&&exp[i]<=90)||(exp[i]>=97&&exp[i]<=122)||exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'||exp[i]=='%'){
		 	printf("%c",exp[i]);
		 }
		else if(exp[i]=='('){
			top++;
			printf("\nPushed = %c",exp[i]);
			stack[top]=exp[i];
		}
		else if(exp[i]==')'){
			while(stack[top]!='('&&top!=-1){
				printf("\nPoped = %c",stack[top]);
				top--;
			}
			if(top==-1){
				printf("Wrong Expression");
			}
			top--;
		}
	}
	
	while(top==-1){
		printf("%c",exp[i]);
		if(exp[i]=='('){
			printf("\nWrong expression");
		}
		i++;
	}
}							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							 
							            