/*
#include<conio.h>
#include<graphics.h>*/
int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm, (char*) "");
     setbkcolor(15);
    //floodfill(380,375,15);
	moveto(200,405);
	lineto(1000,405);
	
		//   Flag  FOOT.
	
		bar(420,320,455,330);
		bar(425,310,450,320);
		//    Flag
		line(435,330,435,220);// Column Flag.
		line(435,220,505,220);
		line(435,240,505,240);
		line(435,260,505,260);
		line(435,280,505,280);	
		line(505,220,505,240);//First Little flag line.
		line(505,240,505,260);//Second Little flag line.
		line(505,260,505,280);//Third Little flag line.
	line(400,330,470,330);//   Top Line
	// Left Line
	line(400,330,360,360);
	line(360,360,330,360);
	line(330,360,330,390);
	line(330,390,360,390);
	arc(374,390,0,180,15);
	// Lines of Window left.
	line(405,340,425,340);
	line(405,340,390,355);
	line(390,355,425,355);
	line(425,340,425,355);
		getbkcolor();
/*          Right Lines.*/
    line(470,330,500,360);
	line(500,360,530,360);
	line(530,360,530,390);
	line(530,390,500,390);
	arc(486,390,0,180,15);
	// Lines of Right Window.
	line(445,340,465,340);
	line(465,340,475,355);
	line(475,355,445,355);
	line(445,355,445,340);
	//            Mid Last Line.
	line(387,390,472,390);
	//floodfill(490,350,RED);
	setcolor(4);
	circle(374,393,12);// Left Wheel.
    setfillstyle(XHATCH_FILL,4);
    floodfill(374,393,4);
	circle(486,393,12);// Right Wheel.
    setfillstyle(XHATCH_FILL,4);
    floodfill(486,393,4);
	getch();
	closegraph();
}