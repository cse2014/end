#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}

void display(void)
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0,0.0,0.0);
	//glBegin(GL_POINTS);


//	for(i=0;i<100000;++i)
//	{		
//		glVertex2f(cos(10+5*i)*75.0+100,sin(10+5*i)*75.0+75);
//		glVertex2f(cos(10+5*i)*40.0+100,sin(10+5*i)*75.0+75);
//	}
//	glEnd();
	glBegin(GL_LINES);
		glVertex2i(50,10);
		glVertex2i(150,10);
	glColor3f(0.60,0.40,0.12);
	glEnd();
	glFlush();


	glBegin(GL_LINES);
		glVertex2i(100,10);
		glVertex2i(100,100);
	glColor3f(0.60,0.40,0.12);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
		glVertex2i(100,70);
		glVertex2i(180,70);
	glColor3f(0.98,0.625,0.12);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
		glVertex2i(100,80);
		glVertex2i(180,80);
	glColor3f(0.98,0.625,0.12);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
		glVertex2i(180,90);
		glVertex2i(180,100);
	glColor3f(1,1,1);
	glEnd();
	glFlush();

	glBegin(GL_POINTS);
	for(i=0;i<1000;++i)
	{		
		glVertex2f(cos(10+5*i)*5.0+140,sin(10+5*i)*5.0+85);
	}
	glColor3f(0,0,1);
	glEnd();


	glBegin(GL_LINES);
		glVertex2i(100,90);
		glVertex2i(180,90);
	glColor3f(1,1,1);
	glEnd();
	glFlush();
		
	glBegin(GL_LINES);
		glVertex2i(180,80);
		glVertex2i(180,90);
	glColor3f(0,1,0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
		glVertex2i(100,100);
		glVertex2i(180,100);
	glColor3f(0,1,0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
		glVertex2i(180,70);
		glVertex2i(180,80);
	glColor3f(0.60,0.40,0.12);
	glEnd();
	glFlush();

	}

void main(int argc,char * argv[])
{
	printf("%f",cos(100));

	

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("lines");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);	
	glutMainLoop();
}
		
