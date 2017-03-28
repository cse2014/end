#include<stdio.h>

#include<conio.h>

#include<graphics.h>

void main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"");

/*Create the stand for the flag with stairs*/

rectangle(200,100,203,300);

setfillstyle(SOLID_FILL,CYAN);

floodfill(201,299,WHITE);

line(185,300,218,300);

line(180,304,223,304);

line(175,308,228,308);

line(175,312,228,312);

line(185,300,185,304);

line(218,300,218,304);

line(180,304,180,308);

line(223,304,223,308);

line(175,308,175,312);

line(228,308,228,312);

floodfill(217,302,WHITE);

floodfill(222,306,WHITE);

floodfill(227,310,WHITE);

/*create the three panels of the flag*/

line(203,100,280,100);

line(203,120,280,120);

line(203,140,280,140);

line(203,160,280,160);

line(280,100,280,120);

line(280,120,280,140);

line(280,140,280,160);

/*Fill the green color in bottom panel of flag*/

setfillstyle(SOLID_FILL,GREEN);

floodfill(204,144,WHITE);

/*Fill the Brown color in top panel of flag*/

setfillstyle(SOLID_FILL,BROWN);

floodfill(204,104,WHITE);

/*Fill the White color in middle panel of flag*/

setfillstyle(SOLID_FILL,WHITE);

floodfill(204,124,WHITE);

/*Create the Ashok chakara of blue color in the middle pannel*/

setcolor(BLUE);

circle(242,130,10);

line(242,120,242,140);

line(232,130,252,130);

line(235,125,250,135);

line(250,125,235,135);

/*Write the text below the Flag*/

setcolor(RED);

settextstyle(1,HORIZ_DIR,3);

outtextxy(100,400,"This is Our National Flag");

getch();

closegraph();

}

