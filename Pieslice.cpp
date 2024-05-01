#include<conio.h>
#include<graphics.h>
int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*) "");
	//  void pieslice(int x ,int y, int stangle , int endangle, int radius);
	pieslice(100,100,0,90,25);
	pieslice(200,200,0,180,25);
	pieslice(300,300,0,270,25);
	pieslice(400,400,0,360,25);
	getch();
	closegraph();
}