#include<stdio.h>
#include<conio.h>
void main(){
	int student[5][3],i,j,max_mark;
	printf("\nEnter Data of Students ");
	printf("\n****************************");
    for(i=0;i<5;i++){
    	printf("\nEnter marks of student %d : ",i+1);
		for(j=0;j<3;j++){
			 printf("\n Enter[%d][%d] : ",i,j);
			scanf("%d",&student[i][j]);
		}
	}
	
 
	
	for(i=0;i<3;i++){
		max_mark=student[0][i];
		for(j=0;j<5;j++){
			if(student[i][j]>max_mark){
				max_mark=student[j][i];
			}
	}
	printf("\n The highest marks obtained in the subject %d = %d", i+1, max_mark);
}
}