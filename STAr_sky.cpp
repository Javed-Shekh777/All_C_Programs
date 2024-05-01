//           Star in The Sky.
#include<conio.h>
#include<graphics.h>
int main(){
	int gd = DETECT ,gm,i;
	initgraph(&gd, &gm, (char*) "");
	int x,y;
	while(!kbhit())
	{
	for(i=1;i<=500;i++)
	{
		x = rand()%getmaxx();
		y = rand()%getmaxy();
		putpixel(x,y,15);
	}
	delay(1000);
	cleardevice();
}
	getch();
	closegraph();
}