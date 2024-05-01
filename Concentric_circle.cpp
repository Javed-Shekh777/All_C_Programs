//                  DRAW A CONCENTRIC CIRCLE.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x,y,i;
	initgraph(&gd,&gm, (char*) "");
	x=getmaxx()/2;
	y=getmaxy()/2;
	outtextxy(x-100,50, "This is a Concentric-Circle");
	//setcolor(RED);
	for(i=1;i<=10;i++){
	setcolor(i);
   circle(x, y, 20*i);}
   /*setcolor(GREEN);
   circle(x, y, 50);
   setcolor(YELLOW);
   circle(x, y, 70);
   setcolor(BLUE);
   circle(x, y, 90);*/
   getch();
   closegraph();
}