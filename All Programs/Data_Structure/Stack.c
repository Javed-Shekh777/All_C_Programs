// WAP to Create a Stack to perform PUSH and POP operation.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
//Function declaration 
void PUSH();
void POP();
void Display();
void Traverse();
void Search();
   //   Array and other variable declaration and initialization....
int stack[5],top=-1,val;
               //    starting of Main  
int main(){
	int choice;
	int top=-1;
	                     //     Menu bar for stack 
	while(1){
		printf("\n\t\t\t****************** STACK IMPLEMENTATION  USING ARRAY *********************");
	    printf("\n................................");
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Display");
		printf("\n 4. Traverse");
		printf("\n 5. Search");
		printf("\n 6. Exit");
		printf("\n................................");
		printf("\n\n\t\t\t Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:system("cls");
				PUSH();
				break;
			case 2:system("cls");
			    POP();
				break;
			case 3:system("cls");
			    Display();
				break;
			case 4:system("cls");
			    Traverse();
				break;
			case 5:system("cls");
			    Search();
				break;	 	
			case 6:
			    exit(1);
				break;
			default :system("cls");
			    printf("\n\n\t Wrong Number Entered");	
				printf("\n\n\n\t\t\t\tPress any key to continue......\n");
				getch();			
		}
		
	}
}  // Closing of main function.
            
             // All userdefind functions body starting from here.
       
	   //      function for inserting or PUSH       
void PUSH(){     
	if(top==4){
		printf("\nOVERFlOW");
	}
	else {
		printf("\nEnter a number : ");
		scanf("%d",&val);
		stack[++top]=val;
	}
}
              // function for Deletion or POP operation of stack
void POP(){
	if(top==-1){
		printf("\n\t\t\t\tUNDERFLOW\n\n");
	}
	else 
       {
       	printf("\nDeleted Index[%d] Data is : %d",top,stack[top--]);
	   }
}
          // Printing all data of Stack.
void Display(){
	printf("\n\t\t>>>>>>>>>>> Printing All Data <<<<<<<<<<<<<<<<<<<<<<<<");
	int i;
	if(top==-1){
		printf("\n Stack is Empty");
	}
	else {
		for(i=top;i>=0;i--){
			printf("\nThe Index[%d] Data is : %d",i,stack[i]);
		}
	}
}

void Traverse(){
	 if(top==-1){
		printf("\n Stack is Empty");
	}
	else {
		for(int i=top;i>=0;i--){
			printf("\nThe Index[%d] Data is : %d",i,stack[i]);	 
		}
	}
}

void Search(){
	int i;
	printf("\nPlease Enter value to search in Satck : ");
	scanf("%d",&val);
	if(top==-1){
		printf("\nStack is Empty");
	}
	else {
		for(i=top;i>=0;i--){
			if(val==stack[i]){
				printf("Data is Found at Index[%d]: %d",i,stack[i]);
				break;
			}
		}
		if(i==-1){
			printf("Data is not Found");
		}
	}
}