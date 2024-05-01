#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	struct Node {
		char bname[100];
		char author[50];
		int pub;
		int page;
		float rate;
		struct Node *next;
	};
	struct Node *temp,*start,*last;
	start=last=temp=NULL;
	int n,i;
	printf("How many Nodes you want to Enter for Books information : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct Node *)malloc(sizeof(struct Node));
		printf("\nPlease enter all Info about book no %d :\n",i+1);
		printf("\nPlease enter Book Name : ");
		fflush(stdin);
		gets(temp->bname);
		printf("Please enter Author name : ");
		gets(temp->author);
		printf("Please enter Publish Year of Book : ");
		scanf("%d",&temp->pub);
		printf("Please enter no of Pages : ");
		scanf("%d",&temp->page);
		printf("Please enter Rate of Book : ");
		scanf("%f",&temp->rate);
		temp->next=NULL;
		if(start==NULL){
			start=last=temp;
		}
		else
		{
			last->next=temp;
			last=temp;
		}
	}
	system("cls");
	printf("\n\n\nPrinting All information about books..........\n\n\n");
	temp=start;
	printf("\n\t\t********* BOOK INFORMATION *************");
	printf("\n\t-----------------------------------------------------------------------------------");
	printf("\n\t  Book Name  \tAuthor Name \t   Year     \t Pages       \t Rs.\n");
	printf("\t1-----------------------------------------------------------------------------------\n");
	while(temp!=NULL){
		 
		printf("\n\t  %s      \t  %s       \t   %d       \t  %d       \t %f",temp->bname,temp->author,temp->pub,temp->page,temp->rate);
	    printf("\n\n");
	    temp=temp->next;
	}
	printf("\n\t------------------------------------------------------------------------------------");
	printf("\n\n\n\n\t\t\t\tPress any key to continue................");
	getch();
}
