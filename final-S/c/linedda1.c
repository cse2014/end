#include<stdio.h>
#include<graphics.h>


void main()
{
	int x1=100,y1=100;
	int x2=200,y2=200;
	int x,y;
	int gd = DETECT,gm;
	float m = (float)(y2-y1) / (float)(x2-x1);
	float dx,dy;
	
	initgraph(&gd,&gm,"NULL");
	if(m>1){
		dx = 1;
		dy = m;
	}
	else{
		dx = m;
		dy = 1;
	}	
	delay(100);
	for(x= x1,y=y1;x!=x2;)
	{	
	putpixel(x,y,BLUE);
	x=(int)x+dx;	
	y=(int)y+dy;
	delay(50);
	}
	delay(10000);	
	closegraph();
}
