// Wite a C program to input marks of 5 subjects Physics, Chemistry, Biology, Mathmatics and Computer Calculate percentage and grade according to following:
/* Percentage>=90% : Grade A
   Percentage>=80% : Grade B
   Percentage>=70% : Grade C
   Percentage>=60% : Grade D
   Percentage>=40% : Grade E
   Percentage<40% :  Grade F */
#include<conio.h>
#include<stdio.h>
int main()
{
	int  Physics, Chemistry, Biology, Mathmatics, Computer, Marks;
	float Percentage;
	printf("Please enter the marks of all subject which are given below...\n");
	printf("Please Enter the marks of Physics\n");
	scanf("%d",&Physics);
	printf("Please Enter the marks of Chemistry\n");
	scanf("%d",&Chemistry);
	printf("Please Enter the marks of Biology\n");
	scanf("%d",&Biology);
	printf("Please Enter the marks of Mathmatics\n");
	scanf("%d",&Mathmatics);
	printf("Please Enter the marks of Computer\n");
	scanf("%d",&Computer);
    Marks=Physics+Chemistry+Biology+Mathmatics+Computer;
    Percentage=Marks/5.0;
    printf("Total marks: %d\n",Marks);
    printf("Total Percentage: %0.3f\n",Percentage);
    if(Percentage>=90)
    {
    	printf("Congratulation ! Your are passed With GRADE : A\n");
	}
	else if(Percentage>=80&&Percentage<90)
    {
    	printf("Congratulation ! Your are passed With GRADE : B\n");
	}
	else if(Percentage>=70&&Percentage<80)
    {
    	printf("Congratulation ! Your are passed With GRADE : C\n");
	}
	else if(Percentage>=60&&Percentage<70)
    {
    	printf("Congratulation ! Your are passed With GRADE : D\n");
	}
	else if(Percentage>=40&&Percentage<60)
    {
    	printf("Congratulation ! Your are passed With GRADE : E\n");
	}
	else if(Percentage<40)
    {
    	printf("Congratulation ! Your are passed With GRADE : F\n");
	}
    return 0;
}












