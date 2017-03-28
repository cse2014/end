#include<stdio.h>

#include<graphics.h>
void pixel(int xc,int yc,int x,int y);
void main()
{
	int gd = DETECT,gm,xc,yc,r,x,y,pk;	
	//clrscr();
	printf("Midpoint circle");
	printf("\nEnter the value of xc:");
	scanf("%d",&xc);	
	printf("\nEnter the value of yc:");
	scanf("%d",&yc);	
	printf("\nEnter the radius of circle:");
	scanf("%d",&r);	
	initgraph(&gd,&gm,"");
	x =0;
	y = r;
	pk = 1-r;
	pixel(xc,yc,x,y);
	while(x<=y)
	{
		if(pk<0)
		{
			x=x+1;
			pk = pk + (2*x)+1;
		}
		else
		{
			x = x+1;
			y = y-1;
			pk = pk+(2*x)-(2*y)+1;	
		}
		pixel(xc,yc,x,y);
	}
	getch();
	closegraph();
}

void pixel(int  xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,BLUE);
	putpixel(xc+y,yc+x,BLUE);
	putpixel(xc-y,yc+x,BLUE);
	putpixel(xc-x,yc+y,BLUE);
	putpixel(xc-x,yc-y,BLUE);
	putpixel(xc-y,yc-x,BLUE);
	putpixel(xc+y,yc-x,BLUE);
	putpixel(xc+x,yc-y,BLUE);
	outtextxy(xc,yc,"Center");
}
