//#include <stdio.h>  
//#include <conio.h>  
//#define NOINPUT  
//int main() {  
//int a=0;  
//#ifdef NOINPUT  
//a=2;  
//#else  
//printf("Enter a:");  
//scanf("%d", &a);  
//#endif         
//printf("Value of a: %d\n", a);  
//getch();  
//}  


#include <stdio.h>  
#include <conio.h>  
int main() {  
int a=0;  
#ifdef NOINPUT  
a=2;  
#else  
printf("Enter a:");  
scanf("%d", &a);  
#endif         
  
printf("Value of a: %d\n", a);  
getch();  
}  