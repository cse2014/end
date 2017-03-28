#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd = DETECT,gm;
	int x ,y;
	initgraph(&gd, &gm, "X:\\TC\\BGI");
  	x = getmaxx()/2;
	y = getmaxy()/2;
	outtextxy(x-100, 50, "ELLIPSE Using Graphics in C");
	ellipse(x, y, 0, 360, 120, 60);
	delay(5000);
	closegraph();
	return 0;
}

