/*                     Print This pattern.
       
                     *****
                     *****
                     *****
                     *****
                     *****                                                      */
#include<conio.h>
#include<stdio.h>
int main(){
	int i, j, N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
	for(i=0;i<=N;i++){
		for(j=0;j<=N;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}                     