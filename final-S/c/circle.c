#include<stdio.h>
#include<graphics.h>


int main(){
	int gd = DETECT,gm;
	int x,y,radius = 80;
	initgraph(&gd,&gm,"C:\\TC:BGI");
	x = getmaxx()/2;
	y = getmaxy()/2;
	outtextxy(x-100,50,"CIRCLE");	
	circle(x,y,radius);
	getch();
	closegraph();
	return 0;
}
