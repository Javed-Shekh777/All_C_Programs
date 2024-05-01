//       Digital Counter using C Graphics.
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){
	int gd = DETECT, gm,i;
	char ch[5];
	initgraph(&gd, &gm, (char*) "");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	setcolor(RED);
	for(i = 10; i>=0;i--){
		sprintf(ch,"%d",i);
		outtextxy(getmaxx()/2,getmaxy()/2,ch);
		//delay(1000);
		cleardevice();
	}
	getch();
	closegraph();
}

