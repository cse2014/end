#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0,200.0,0.0,150.0,-1,1);
}
void linee(float x1,float y1,float x2,float y2)
{
	glBegin(GL_LINES);
		glVertex2i(x1,y1);
		glVertex2i(x2,y2);
	glEnd();	
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,0.0);
int x=50,y=60;
int x1=50,x2=60,x3=60,x4=50,y1=50,y2=50,y3=60,y4=60;
//square shape from 
	linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
	glFlush();
//Translation factor
int tx=15,ty=25;
x1+=tx; y1+=ty;x2+=tx; y2+=ty;x3+=tx; y3+=ty;x4+=tx; y4+=ty;
	glColor3f(0.0,1.0,0.0);
linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
		glFlush();

//Rotation factor

int ra=45,x0=50,y0=50;
float theta=(float)(ra*3.14/180);
int a=x1,b=y1;
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
	glColor3f(1.0,0.0,0.0);
	linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
	glFlush();
x1+=y1; x2+=y2; x3+=y3; x4+=y4;

	glColor3f(0.5,0.5,1.0);
linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
		glFlush();
float sx=1.5,sy=1.5;
x1*=sx;y1*=sy; x2*=sx;y2*=sy; x3*=sx;y3*=sy; x4*=sx;y4*=sy;
	glColor3f(0.0,0.7,0.3);
linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
		glFlush();
}
int main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("2D Composite Transformation Using OpenGL");
	init2D(1.0,1.0,1.0);
	glutDisplayFunc(display);	
	glutMainLoop();
	return 0;
}
		
