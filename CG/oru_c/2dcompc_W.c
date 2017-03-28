#include<stdio.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT, gmode;
	  int x1=50,x2=70,x3=70,x4=50,y1=50,y2=50,y3=70,y4=70;

	int x=50,y=70;
	int tx=15,ty=25;
	int ra=45,x0=50,y0=50;
	float theta=(float)(ra*3.14/180);
	int a=x1,b=y1;
	float sx=1.5,sy=1.5;

initgraph(&gdriver, &gmode,""); /* request for auto detection*/

//square shape from
	line(x1,y1,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x2,y2);
	line(x3,y3,x4,y4);
	//Translation factor
x1+=tx; y1+=ty;x2+=tx; y2+=ty;x3+=tx; y3+=ty;x4+=tx; y4+=ty;

line(x1,y1,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x2,y2);
	line(x3,y3,x4,y4);

//Rotation factor

x1=(x0+((a-x0)*cos(theta)-(b-y0)*sin(theta)));
y1=(y0+((a-x0)*sin(theta)+(b-y0)*cos(theta)));
 a=x2,b=y2;
x2=(x0+((a-x0)*cos(theta)-(b-y0)*sin(theta)));
y2=(y0+((a-x0)*sin(theta)+(b-y0)*cos(theta)));
a=x3,b=y3;
x3=(x0+((a-x0)*cos(theta)-(b-y0)*sin(theta)));
y3=(y0+((a-x0)*sin(theta)+(b-y0)*cos(theta)));
 a=x4,b=y4;
x4=(x0+((a-x0)*cos(theta)-(b-y0)*sin(theta)));
y4=(y0+((a-x0)*sin(theta)+(b-y0)*cos(theta)));


	line(x1,y1,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x2,y2);
	line(x3,y3,x4,y4);

//Shearing Factor shx=1;

x1+=y1; x2+=y2; x3+=y3; x4+=y4;


line(x1,y1,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x2,y2);
	line(x3,y3,x4,y4);

//Scaling factor
x1*=sx;y1*=sy; x2*=sx;y2*=sy; x3*=sx;y3*=sy; x4*=sx;y4*=sy;
	line(x1,y1,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x2,y2);
	line(x3,y3,x4,y4);
	getch();
	closegraph();
return 0;


}

