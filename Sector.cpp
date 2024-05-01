#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
// void sector(int x, int y, int startangle, int endangle , int xradius , int yradius);
int gd = DETECT,gm;
initgraph(&gd, &gm, (char*) "");

sector(100,100,0,90,25,35);
sector(250,250,0,135,25,35);
sector(350,350,0,180,25,35);
sector(500,500,0,360,25,35);
getch();
closegraph();
}