#include <stdio.h>
#include <graphics.h>

#include <stdlib.h>
void main()
{
int gd=DETECT,gm,i,j=0;
//clrscr();
initgraph(&gd,&gm,"..\\bgi");
setcolor(6);
rectangle(225,125,355,155);
while(j<=30)
{
for (i=0;i<125;i++)
outtextxy(225+i,125+j," ");
j++;
}
setcolor(7);
rectangle(225,155,355,185);
j=0;
while(j<=30)
{
for (i=0;i<125;i++)
outtextxy(225+i,155+j," ");
j++;
}
setcolor(2);
rectangle(225,185,355,215);
j=0;
while(j<=30)
{
for (i=0;i<125;i++)
outtextxy(225+i,185+j," ");
j++;
}
setcolor(9);
rectangle(220,120,225,440);
j=0;
while(j<=312)
{
for (i=0;i<1;i++)
outtextxy(220+i,120+j," ");
j++;
}
rectangle(200,440,245,450);
rectangle(190,450,260,460);
rectangle(175,460,275,470);
circle(291,170,13);
line(291,158,291 ,183);
line(279,170,303,170);
line(282,160,300,180);
line(282,180,300,160);
//settextstyle(3,0,7);
setcolor(5);
outtextxy(100,5,"INDIAN FLAG");
getch();
}
