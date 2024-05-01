// Generate OTP or Captcha Code in C.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void generateOTP(){
	char otp[5],votp[5],time;
	int i;
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++)
	{CHARACTER
		c=rand()%10 + 48;
		otp[i]=c;
	}
	
	otp[i]='\0';         //storing null in last.
    printf("OTP Generate: %s",otp);
}