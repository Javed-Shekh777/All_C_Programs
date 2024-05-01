//                  DRAW A 3D BAAR GRAPH.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	printf("WELCOME TO YOU");
	int gd=DETECT, gm;
	int n;
	initgraph(&gd,&gm, (char*) "");
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
//	outtextxy(15,25,"Enter a number : ");
	 
	outtextxy(10,10,"Hello World");
   outtextxy(275,0,"3D BAR GRAPH");
   setlinestyle(SOLID_LINE,0,2);
   line(90,410,90,50);
   line(90,410,590,410);
   line(85,60,90,50);
   line(95,60,90,50);
   line(585,405,590,410);
   line(585,415,590,410);
   outtextxy(65,60,"Y");
   outtextxy(570,420,"X");
   outtextxy(70,415,"O");
    setfillstyle(XHATCH_FILL, RED);
   bar3d(150,80,200,410, 15, 1);
   bar3d(225,100,275,410, 15, 1);
   bar3d(300,120,350,410, 15, 1);
   bar3d(375,170,425,410, 15, 1);
   bar3d(450,135,500,410, 15, 1);
   
   int points[]={320,150,440,340,230,340,320,150};
    fillpoly(4, points);
   getch();
   closegraph();
}