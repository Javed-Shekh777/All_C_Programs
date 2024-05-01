//
#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[100];
int checker(char [],char []);
int top=-1;
void Push(char);
char Pop();

int main(){
	char exp[100],ans[100];
	printf("\nEnter expression : ");
	fflush(stdin);
	gets(exp);
	fflush(stdin);
	int n = checker(exp,ans);
	if(n==1){
	printf("\nEquation is correct");
}else {
	printf("\nExpresson is incorrect");
}
	
}
int checker(char exp[],char ans[]){
	int i=0;
	while(exp[i]!='\0'){
		if(exp[i]=='('){
			Push(exp[i]);
			i++;
		}
		else if(exp[i]==')'){
			if(top!=-1&&exp[i]==Pop()){
				printf("Poped item is : %c",stack[top]);
				top--;
			}else {
				printf("Expression is wrong");
			}
			i++;
		}
	}
}
void Push(char ch){
	   if(top==100){
	   	printf("Stack is Full");
	   }
	   else {
		top++;
		stack[top]=ch;
		printf("Pushed item is : %c",stack[top]);
	}
	
}

char Pop(){
	char ch;
	if(top==-1){
		printf("\nStack is Empty");
	}
	else {
		ch=stack[top];
		top--;
	}
	return ch;
}