#include<stdio.h>
#include <GL/glut.h>
#include<math.h>
void init();
void display();
void drawPolygon(int, int, int, int, int, int, int, int);
void setPixel(GLint, GLint);
void main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(300,300); 
	glutInitWindowPosition(600,50); 
	glutCreateWindow("Implementation of Shear Algorithm");
	init(); 
	glutDisplayFunc(display); 
	glutMainLoop(); 
}
void init(void)
{
	glClearColor(1.0,1.0,1.0,0.0); 
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(0.0,300.0,0.0,300.0);
}
void setPixel(GLint xCoordinate, GLint yCoordinate)
{
	glBegin(GL_POINTS);
	glVertex2i(xCoordinate,yCoordinate);
	glEnd();
	glFlush(); 
}
void drawPolygon(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(x2, y2);
	glVertex2i(x3, y3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(x3, y3);
	glVertex2i(x4, y4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(x4, y4);
	glVertex2i(x1, y1);
	glEnd();
	glFlush();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glPointSize(2.0);
	GLint x0=100; 
	GLint y0=100;
	GLint x1 = 150; 
	GLint y1 = 150;
	drawPolygon(x0, y0,x1, y0, x1, y1, x0, y1); 
	int opt;
	float sh;
	GLint x0_New, x1_New, y0_New, y1_New ;
	for(;;)
	{
		printf(" \n 1. Shear along X-axis \n 2. Shear along Y-axis \n 3. Exit\n");
		printf("Enter your option:");
		scanf("%d", & opt);
		switch(opt)
		{
			case 1: printf("\nEnter shear parameter: ");
				scanf("%f", &sh);
				x0_New = x0+ sh * y1;
				x1_New = x1+ sh * y1;
				glClear(GL_COLOR_BUFFER_BIT);
				glColor3f(0.0,0.0,0.0);
				glPointSize(2.0);
				drawPolygon(x0, y0, x1, y0, x1_New, y1, x0_New, y1);
				break;
			case 2:	printf("\nEnter shear parameter: ");
				scanf("%f", &sh);
				y0_New = y0+ sh * y1;
				y1_New = y1+ sh * y1;
				glClear(GL_COLOR_BUFFER_BIT);
				glColor3f(0.0,0.0,0.0);
				glPointSize(2.0);
				drawPolygon(x0, y0, x1, y0_New, x1, y1_New, x0, y1);
				break;
				default:exit(0);
		}
	}
}
