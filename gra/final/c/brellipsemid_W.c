#include<stdio.h>
#include<math.h>
#include<graphics.h>
void disp();
float x,y;
int xc,yc;
void main()
{
	int gd = DETECT,gm;
	int a,b;
	float p1,p2;
	printf("\nEnter the center co-ordinates");
	scanf("%d%d",&xc,&yc);
	printf("\nEnter the x and y axis lengths:");
	scanf("%d%d",&a,&b);
		
	initgraph(&gd,&gm,"");	
	x = 0;
	y = b;
	disp();
	p1 = (b*b)-(a*a*b)+(a*a)/4;
	while((2.0*b*b*x) <= (2.0*a*a*y))
	{
		x++;
		if(p1<=0)
			p1 =p1 +(2.0*b*b*x)+(b*b);
		else
		{
			y--;
			p1 = p1 +(2.0*b*b*x)+(b*b)-(2.0*a*a*y);
		}
		disp();
			x=x;
		disp();
			x =x;
	}
	x = a;y =0;
	disp();
	p2 = (a*a)+2.0*(b*b*a)+(b*b)/4;
	while((2.0*b*b*x) > (2.0*a*a*y))
	{
		y++;
		if(p2>0)
			p2 = p2 + (a*a) - (2.0*a*a*y);
		else
		{
			x--;
			p2 = p2 + (2.0*b*b*x) - (2.0*a*a*y) + (a*a);
		}
		disp();
			y=y;
		disp();
			y =y;
	}
	line(xc,yc+b,xc,yc-b);
	line(xc+a,yc,xc-a,yc);
	closegraph();
}

void disp()
{
	putpixel(xc+x,yc+y,100);
	putpixel(xc-x,yc+y,100);
	putpixel(xc+x,yc-y,100);
	putpixel(xc-x,yc-y,100);
	delay(50);
	outtextxy(xc,yc,"(120,120)");
}
