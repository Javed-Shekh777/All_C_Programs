// Evaluation of postfix Expression
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char stack[100];
int top=-1;
void push();
void pop();

int main(){
	char Post[100],eva[100],a,b;
	int i=0,j=0;
	while(Post[i]!='\0'){
		if((Post[i]>='0'&&Post[i]<='9')||(Post[i]=='A'&&Post[i]=='Z')||(Post[i]=='a'&&Post[i]=='z')){
			top++;
			stack[top]=Post[i];
			i++;
		}
		else if(Post[i]=='+'||Post[i]=='-'||Post[i]=='*'||Post[i]=='/'||Post[i]=='%'||Post[i]=='^'){
			if(top==-1){
				printf("\nStack is Empty");
			}
			else if(top!=-1){
				a=stack[top];top--;
				b=stack[top];
				stack[top]=bPost[i]a;
				top++;
			}
			i++;
		}
	}
	eva
}