//                         Draw an Ellipse.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd, &gm, (char*) "");
	x=getmaxx()/2;
	y=getmaxy()/2;
	 
	outtextxy(x-100,50,"This is An Simple ELLIPSE");
	ellipse(x, y, 0, 360, 120, 60);
	getch();
	closegraph();
}