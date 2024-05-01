//  Digital clock.
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<time.h>
int main(){
	int gd = DETECT ,gm;
	long currentTime;
	char timestr[256];
	initgraph(&gd,&gm, (char*) "");
	while(!kbhit())
	{
		cleardevice();
		currentTime = time(NULL);
		strcpy(timestr,ctime(&currentTime));
		setcolor(RED);
		settextjustify(CENTER_TEXT,CENTER_TEXT);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
		outtextxy(getmaxx()/2,getmaxy()/2,timestr);
		delay(1000);
	}
	getch();
	closegraph();
}




































