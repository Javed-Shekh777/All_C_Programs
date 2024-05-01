//                 Draw an ARC.  
#include<conio.h>
#include<graphics.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	setcolor(9);
	arc(100,150,0,450,50);
	getch();
	closegraph();
}