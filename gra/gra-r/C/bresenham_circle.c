#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	int r,x,y,p,xc=320,yc=240;
	printf("Enter the radius ");
	scanf("%d",&r);
	x=0;
	y=r;
	initgraph(&gd,&gm,NULL);
	putpixel(xc+x,yc-y,1);
	p=3-(2*r);//Decision parameter
	for(x=0;x<=y;x++)
	{
		if (p<0)
		{
			y=y;
			p=(p+(4*x)+6);
		}
		else
		{
			y=y-1;
			p=p+((4*(x-y)+10));
		}
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
}
	delay(5000);
	closegraph();
}
