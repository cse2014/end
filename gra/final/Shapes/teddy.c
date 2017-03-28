#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm ,"");
 setbkcolor(WHITE);
  setcolor(LIGHTRED);
  ellipse(300,150,0,360,70,60);
  ellipse(300,260,0,360,80,75);
  circle(220,122,30);
  circle(380,122,30);
  circle(280,140,8);
  circle(320,140,8);
  ellipse(300,172,0,360,28,25);
  ellipse(300,168,0,360,8,6);
  line(300,174,300,179);
  ellipse(292,179,180,0,8,4);
  ellipse(308,179,180,0,8,4);
  ellipse(230,220,0,360,30,30);
  ellipse(370,220,0,360,30,30);
  ellipse(250,330,0,360,30,30);
  ellipse(350,330,0,360,30,30);
  getch();
  closegraph();
}
