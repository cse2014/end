#include<stdio.h>
#include<graphics.h>


int main(){
	int gd = DETECT,gm;
	int x,y,radius = 80;
	initgraph(&gd,&gm,"C:\\TC:BGI");
	x = getmaxx()/2;
	y = getmaxy()/2;
	outtextxy(x-100,50,"ELLIPSE");	
	ellipse(x,y,0,360,120,60);
	getch();
	closegraph();
	return 0;
}
