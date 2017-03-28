#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void lineBres(int,int,int,int);
void setPixel(int,int);

void main()
{
int x,y,length,breadth;
int driver=DETECT,mode;

clrscr();
printf("Enter the co-ordinates of the lower left corner (a b): ");
scanf("%d %d",&x,&y);
printf("Enter the length of the rectangle: ");
scanf("%d",&length);
printf("Enter the breadth of the rectangle: ");
scanf("%d",&breadth);
printf("<Press any key to continue>");
getch();

initgraph(&driver,&mode,"F:\\TC\\BGI");
lineBres(x,y,x+length,y);
lineBres(x+length,y,x+length,y-breadth);
lineBres(x+length,y-breadth,x,y-breadth);
lineBres(x,y-breadth,x,y);
getch();
closegraph();
}

void lineBres(int x1,int y1,int x2,int y2)
{
float error,m;
int x,y;
x=x1;
y=y1;
if(x1==x2)
{
   while(y!=y2)
   {
      if(y2-y1>0)
         ++y;
      else
         --y;
      setPixel(x,y);
   }
}
else
{
   m=(float)(y2-y1)/(x2-x1);
   error=0;
   setPixel(x,y);
   while(x!=x2)
   {
      error+=m;
      if(error>.5)
      {
         if(x2-x1>0)
            y+=1;
         else
            y-=1;
         --error;
      }
      if(x2-x1>0)
         ++x;
      else
         --x;
      setPixel(x,y);
   }
}
}

void setPixel(int x,int y)
{
putpixel(x,y,2);
}

