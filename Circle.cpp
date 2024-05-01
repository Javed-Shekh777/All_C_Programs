 //          Draw a Simple Circle.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm, (char*)"");
	setcolor(13);
     x =getmaxx()/2;
     y=getmaxy()/2;
     outtextxy(x-100,50,"This is a Simple CIRCLE");
     circle(x,y,120);
     setfillstyle(XHATCH_FILL,4);
     floodfill(x,y,13);
	getch();
	closegraph();
}