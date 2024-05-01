// Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>

int main()
{
    int i, j, end, isPrime,sum=0; // isPrime is used as flag variable

    /* Input upper limit to print prime */
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
            sum=sum+i;
			        }
    }
printf("\nThe Sum of All Prime Numbers is =%d",sum);
    return 0;
}