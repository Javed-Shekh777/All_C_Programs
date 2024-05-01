/* #include <limits.h>
#include <stdio.h>

int main()
{
	printf("minimum int value = %d\n"
		"maximum int value = %d\n"
		"size of int in bytes = %zu\n"
		"size of int in bits = %zu",
	INT_MIN, INT_MAX, sizeof(int),
		sizeof(int) * CHAR_BIT);

	printf("\nUINT_MAX + 1 = %u", UINT_MAX + 1);
}*/


/*

#include <stdio.h>

int main()
{
	printf("Current File :%s\n", __FILE__);
	printf("Current Date :%s\n", __DATE__);
	printf("Current Time :%s\n", __TIME__);
	printf("Line Number :%d\n", __LINE__);
	return 0;
}*/


//C program to illustrate
// \a escape sequence
#include <stdio.h>
int main(void)
{
    printf("My mobile number "
          "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
          printf("\n\"Javed Akhtar\" ");
    return (0);
}


 
