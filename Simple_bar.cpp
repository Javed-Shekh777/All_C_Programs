//                     Draw a Bar.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT ,gm;
	initgraph(&gd,&gm, (char*) "");
	outtextxy(180,100,  "This ia a  Simple Bar");
	bar(200, 200, 230, 500);
	getch();
	closegraph();
	//getch();
}