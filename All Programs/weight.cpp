#include<stdio.h>
#include<conio.h>
int main(){
	struct Name {
		char name[30];
		char roll[10];
		int rol;
	};
 unsigned long long	int weight = 63,i;
	 
	struct Name s={"Name","Roll_no"};
	 
	 
	int Roll[5];
	char Name[300];
	printf("Weight is : %d kg\n",weight);
	printf("Weight is : %-60d kg\n",weight);
	printf("Weight is : %4d kg\n",weight);
	printf("Weight is : %6d kg\n",weight);
	printf("Weight is : %-6d kg\n",weight);
	printf("Weight is : %1d kg\n",weight);
	printf("\n\n\n\n");
	 
	for(i=0;i<2;i++){
		printf("Please enter name : ");
		fflush(stdin);
		gets(Name);
		printf("\nPlease enter roll no : ");
		scanf("%llu",Roll[i]);
	}
	printf("\t____________________________________\n");
	printf("%20s",s.name);
	printf("%20s",s.roll);
	printf("\n\t__________________________________");
	 
	for(i=0;i<2;i++){
		printf("\n%25s",Name);
		printf("%15llu",Roll);
	}
	return 0;
}