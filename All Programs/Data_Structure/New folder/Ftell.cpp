#include <stdio.h>  
#include <conio.h>  
int main (){  
   FILE *fp;  
   int length;  
   
   fp = fopen("file.txt", "w+"); 
    fputs("Hello world",fp); 
   fseek(fp, 20, SEEK_SET);  
  
   length = ftell(fp);  
  
   fclose(fp);  
   printf("Size of file: %d bytes", length);  
   getch();
}