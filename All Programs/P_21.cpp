// Write a C program to input electricity unit charges and calculate total electricity bill acccorsing to the given condition:
/*   For First 50 Units Rs.= 0.50/unit
     For Next 100 Units Rs.= 0.75/unit
     For Next 100 Units Rs.= 1.20/unit
     For Unit above to 250 Rs.= 1.50/unit
     an additional surcharge of 20% is added to the bill*/
#include<conio.h>
#include<stdio.h>
int main()
{
	float unit,adch,Bill;
	printf("Please enter the Electricity Unit charge:\n");
	scanf("%f",&unit);
/*	if(unit<=50){
		unit=unit*0.50;
		Bill=unit;
		printf("The Total Electricity bill is Rs.= %f\n",Bill);
	}*/
	if(unit>50&&unit<=150){
		unit=(unit-50)*0.75;
		printf("11 unit  =%f\n",unit);
		unit=unit*0.50;
		printf("222 unit =%f\n",unit);
		Bill=unit;
		printf("The Total Electricity bill is Rs.= %f\n",Bill);
	}
/*	else if(unit<=50){
		unit=unit*0.50;
		Bill=unit;
		printf("The Total Electricity bill is Rs.= %f\n",Bill);
	}
	else if(unit<=250){
		unit=(unit-100)*0.75+(unit-100)*0.50+unit*1.20;
		Bill=unit;
		printf("The Total Electricity bill is Rs.= %f\n",Bill);
	}*/
	return 0;
}