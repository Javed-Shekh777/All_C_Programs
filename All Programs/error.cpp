//#include <stdio.h>
//#include<stdlib.h>
//main()
//{
//int i;
//fprintf(stdout,"Give value of i \n");
//fscanf(stdin,"%d",&i);
//fprintf(stdout,"Value of i=%d \n",i);
//fprintf(stderr,"No error: But an example to show error message.\n");
//}


#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{
 FILE *ifp, *ofp;
 int i, c;
 char src_file[100],dst_file[100];
 
 if(argc!=3) {
 printf ("Usage: ./a.out <src_file> <dst_file> \n");
 exit(0);
 }
 else {
 strcpy (src_file, argv[1]); 
 strcpy (dst_file, argv[2]);
}
}