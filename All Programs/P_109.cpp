/*                              Print this pattern
                          Hollow Square Star Pattern

                             *****
                             ** **
                             * * *
                             ** **
                             *****                                        */
#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1||j==N)
            {
                printf("*");
            }
            else if((i==3&&j%2!=0))
            {
                printf("*");
            }
            else if((i==2&&j==1||j==2||j==4||j==5)||(i==4&&j==1||j==2||j==4||j==5) ){
            	printf("*");
			}
			else {
				printf(" ");
			}
        }
        printf("\n");
    }

    return 0;
}                                                    