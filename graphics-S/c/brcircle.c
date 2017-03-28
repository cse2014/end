# include<stdio.h>

# include<graphics.h>
# include<math.h>

void main()
{
int gd=DETECT,gm;
int r,x,y,p,xc=320,yc=240;

initgraph(&gd,&gm,"C:\\TC\\BGI");
cleardevice();


printf("Enter the radius ");
scanf("%d",&r);


x=0;
y=r;
putpixel(xc+x,yc-y,1);

p=3-(2*r);

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

putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+y,yc-x,10);
putpixel(xc-y,yc-x,10);
putpixel(xc+y,yc+x,10);
putpixel(xc-y,yc+x,10);

}
getch();
closegraph();
}
