//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
#include<conio.h>
int main(){
	int  Physics, Chemistry, Biology, Mathmatics, Computer, Marks;
	float Percentage,average;
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
    average = Marks / 5.0;
    Percentage = (Marks / 500.0) * 100;
    printf("Total marks: %d\n",Marks);
    printf("Total marks: %0.3f\n",average);
    printf("Total Percentage: %0.2f%%\n ",Percentage);
    
}