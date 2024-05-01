#include<stdio.h>
int main(){
	struct Book 
	{
		char book_name[40]={"mathematics"};
		float price={200};
		char author[50]={"javed"};
		int page={400};
		int year={2022};
		
	};
	struct Book b[3];
	int i;
	
    printf("Please enter Book information:\n");
   /* for(i=0;i<=2;i++){
	printf("Please enter Book name:\n");
	scanf("%s",b[i].book_name);
	printf("Please enter price this book:\n");
	scanf("%f",&b[i].price);
	printf("PLease enter author name:\n");
	scanf("%s",b[i].author);
	printf("Please enter total page in Book:\n");
	scanf("%d",&b[i].page);
	printf("Please enter Edition year of Book:\n");
	scanf("%d",&b[i].year);
}*/
	printf("\n\n\nTotal information of Book are given below:\n");
	for(i=0;i<=2;i++){
	printf("%d. The Book name is: %s\n",i+1,b[i].book_name);
	printf("%d. The price this book is : %0.3f\n",i+1,b[i].price);
	printf("%d. The author name  is : %s\n",i+1,b[i].author);
	printf("%d. The total page in Book is: %d\n",i+1,b[i].page);
	printf("%d. The Edition year of Book is : %d\n\n\n",i+1,b[i].year);
}
//printf("\n The size of program is = %d\n",sizeof(b));
	return 0;
}