// Stack using linked list.
      //  Header Files.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
         //   Createation node using Structure.
struct Node {
	int data;
	struct Node *link;
};
struct Node *top=NULL;   // Initialization
//       Declaration  of Userdefind functions.
void PUSH();
void POP();
void Display();
void Traverse();
void Search();
void Change_data();
//          Starting of main function
int main(){
	int ch;
	while(1){
	printf("\n\t\t\t***************** STACK IMPLEMENTATION USING LINKED LIST *******************");
	printf("\n------------------------------------------------------------------------------------");
	printf("\nPress 1-> To PUSH");
	printf("\nPress 2-> To POP");
	printf("\nPress 3-> To Display");
	printf("\nPress 4-> To Traverse");
	printf("\nPress 5-> To Search");
	printf("\nPress 6-> To Change Data where you want");
	printf("\nPress 7-> To Exit");
	printf("\n------------------------------------------------------------------------------------");
	printf("\n\t\t\tEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			PUSH();
			break;
		case 2:
			POP();
			break;
		case 3:
		    Display();
			break;
		case 4:
		    Traverse();
			break;
		case 5:
		    Search();
			break;
		case 6:
		    Change_data();
			break;			
		case 7:
		    exit(1);
			break;
		default :
		    printf("\nWrong choice Entered");
			printf("\n\t\t\tPress any key to continue.....\n\n");
			getch();	
     	}  //  Closing of switch.
    }  // Closing of while loop.
}//  Closing of main function.

                   //  Function of Push operation
void PUSH(){
	struct Node *temp;
	temp=(struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter Data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	temp->link=top;  //  main insertion or PUSH operation is-
	top=temp;        //  working here.
} //  Closing of Push function.

                     //  Function of Pop operation.
void POP(){
	if(top==NULL){
		printf("Stack is Empty");
	}
    struct Node *temp;
	temp=top;
	top=top->link;
	free(temp);	
}   //   Closing of Pop function.
                    
                    //  Function of Display operation.
void Display(){
	if(top==NULL){
		printf("\nStack is Empty");
	}
	struct Node *temp=top;
	while(temp!=NULL){
		printf("Data -> %d\n",temp->data);
		temp=temp->link;
	}
}   //   Closing of Display function.

                     //  Function of Traverse operation.
void Traverse(){
	if(top==NULL){
		printf("\nStack is Empty");
	}
	struct Node *temp=top;
	while(temp!=NULL){
		printf("Data -> %d\n",temp->data);
		temp=temp->link;
	}
	printf("\nStack is Traversed");
	printf("\n\t\t\tPress any key to continue......\n\n");
	getch();
}   //   Closing of Traverse function.

                       //  Function of Search operation.
void Search(){
	struct Node *temp;
	int val;
	printf("\nEnter valaue to search : ");
	scanf("%d",&val);
	temp=top;
	while(temp!=NULL){
		if(temp->data==val){
			printf("Data is Found : %d",temp->data);
			break;
		}
		temp=temp->link;
	}
	if(temp==NULL){
		printf("\n\t\t\tI am SORRY ! Data is not Found\n");
	}	
}  //   Closing of Search function.

                           //  Function of Change Data operation.
void Change_data(){
	struct Node *temp;
	int val,pos;
	printf("\nEnter Data(of stack) where you want to change Data : ");
	scanf("%d",&pos);
	printf("\nEnter data to rewrite : ");
	scanf("%d",&val);
	temp=top;
	while(temp!=NULL){
		if(temp->data==pos){
			temp->data=val;
		}
		temp=temp->link;
	}
}   //   Closing of Change Data function.
