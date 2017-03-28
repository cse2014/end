#include<stdio.h>
#include<graphics.h>
#include<math.h>
//#include<conio.h>

void main()
{
	int gd=DETECT,gm;
	int x1,x2,y1,y2;
	int dx,dy,x,y,p,xend;
	printf("\nEnter the value of x1:");
	scanf("%d",&x1);
	printf("\nEnter the value of y1:");
	scanf("%d",&y1);
	printf("\nEnter the value of x2:");
	scanf("%d",&x2);
	printf("\nEnter the value of y2:");
	scanf("%d",&y2);
	
	initgraph(&gd,&gm,"..\\bgi");
	
	dx = abs(x1-x2);
	dy = abs(y1-y2);
	p = 2*dy-dx;
	if(x1>x2)
	{
		x=x2;
		y=y2;
		xend = x1;	
	}
	else
	{
		x=x1;
		y=y1;
		xend = x2;
	}
	putpixel(x,getmaxy()-y,100);
	outtextxy(x1,getmaxy()-y1,"(x1,y1)");
	outtextxy(x2,getmaxy()-y2,"(x2,y2)");
	while(x<xend)
	{
		x =x +1;
		if(p<0)
		{
			p=p+2*dy;
		}
		else
		{
			y=y-1;
			p=p+2*(dy-dx);
		}
	putpixel(x,getmaxy()-y,100);
	delay(100);
	}
	getch();
	closegraph();
}
