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
	glColor3f(1.0,0.0,0.0);
int x=50,y=60;
int x1=10,x2=30,x3=50,x4=35,y1=30,y2=10,y3=30,y4=100;
//Pyramid shape from 
	linee(x1,y1,x2,y2);
	linee(x1,y1,x4,y4);
	linee(x3,y3,x2,y2);
	linee(x3,y3,x4,y4);
	linee(x2,y2,x4,y4);
	glFlush();

//Front view
int a1=60,b1=20,a2=80,b2=20,a3=70,b3=100;
glColor3f(0.0,0.0,1.0);
linee(a1,b1,a2,b2);
linee(a1,b1,a3,b3);
linee(a2,b2,a3,b3);
glFlush();


//Left view
a1=90,b1=20,a2=115,b2=20,a3=100,b3=100;
glColor3f(0.0,1.0,1.0);
linee(a1,b1,a2,b2);
linee(a1,b1,a3,b3);
linee(a2,b2,a3,b3);
glFlush();


//Top view
a1=130,b1=20,a2=150,b2=10,a3=170,b3=20;
int a4=150,b4=30;
glColor3f(0.0,1.0,0.0);
linee(a1,b1,a2,b2);
linee(a1,b1,a4,b4);
linee(a2,b2,a3,b3);
linee(a4,b4,a3,b3);
glFlush();


}



int main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("3D Projection Using OpenGL");
	init2D(1.0,1.0,1.0);
	glutDisplayFunc(display);	
	glutMainLoop();
	return 0;
}
		
