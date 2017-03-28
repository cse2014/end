#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0,200.0,0.0,150.0,-1,1);
}

void display(void)
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);


	for(i=0;i<100000;++i)
	{		
		glVertex2f(cos(10+5*i)*75.0+100,sin(10+5*i)*75.0+75);
		
	}
	glEnd();


//	glBegin(GL_LINES);
//		glVertex2i(100,0);
//		glVertex2i(100,1000);
//	glEnd();
	glFlush();
}

void main(int argc,char * argv[])
{
	printf("%f",cos(100));

	

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Normal Circle Using OpenGL");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);	
	glutMainLoop();
}
		
