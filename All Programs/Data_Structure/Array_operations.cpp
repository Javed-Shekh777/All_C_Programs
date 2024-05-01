/*        All operations on Array One Dimensional.          */
  //Including some header files.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void Create_array (int []);
void Display_array (int []);
void Insert(int);
void Delete();
void Merge();
void sort_ascending();
void sort_decending();
void Add_two (int [],int []);
void Exit();
int main(){
	int size,choice;
	while(1){
	printf("All Operation are Done on Array:\n\n");
	printf("\n1. To Create Array : ");
	printf("\n2. To Display Array : ");
	printf("\n3. To Insert element in Array : ");
	printf("\n4. To Delete element in Array : ");
	printf("\n5. To Merge Array : ");
	printf("\n6. To Sort Array in Ascending order : ");
	printf("\n7. To Sort Array in Decending order : ");
	printf("\n8. To Exit : ");
	printf("\nPlease Enter your Choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			int size;
			printf("Please Enter the Size of Array : ");
			scanf("%d",&size);
			int Array[12];
			Create_array(Array);
			break;
		case 5:
			printf("\nDisplaying All Elements of Array:\n\n");
			Display_array(Array);
			break;
		case 8: exit(0);
		     break;
	}
}
}
void Create_array(int Array[12]){
	int i;
	for(i=0;i<size;i++){
	printf("\n Enter the Element of Array[%d] : ",i);
	scanf("%d",&Array[i]);
   }
}
void Display_array(int Array[size]){
	int i;
	for(i=0;i<size;i++){
		printf("Array[%d] = %d\n",i,Array[i]);
	}
}