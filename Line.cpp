//       Draw a simple a Line.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT, gm,i,y;
	initgraph(&gd,&gm, (char*) "");
	/*setlinestyle(0,0,1);
	line(100,100,400,100);
	setlinestyle(1,0,1);
	moveto(200,200);
	lineto(600,200);
	setlinestyle(2,0,1);
	line(300,300,600,300);*/
	for(i = 0; i<=4 ; i++){
	setlinestyle(i,0,1);
	line(400,y,800,y);
	y=y+50;
	}
//void setlinestyle(int linestyle , unsigned upattern , int thiclness);
/*
Name                Value                 Discription
SOLID_LINE             0                   Solid line
DOTTED_LINE            1                   Dotted  line
CENTER_LINE            2                   Centered line
DASHED_LINE            3                   Dashed line
USERIT_LINE            4                   User-defined line style
if beech me zero le alawa kuch aur denge.*/

	getch();
	closegraph();
}