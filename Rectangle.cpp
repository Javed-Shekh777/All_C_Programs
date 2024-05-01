//                       Draw a Rectangle.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm, (char*) "");
	setcolor(4);
	rectangle(100,50,400,100);
	getch();
	closegraph();
}