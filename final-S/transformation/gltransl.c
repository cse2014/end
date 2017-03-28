#include<GL/glut.h>
#include<stdio.h>


void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0,200.0,0.0,150.0,-1,1);
}

void display(void)
{
	int x1,x2,x3,x4,y1,y2,y3,y4,tx,ty;
	printf("\nEnter the original starting points:");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the original end points:");
	scanf("%d %d",&x2,&y2);
	printf("\nEnter the translation points:");
	scanf("%d %d",&tx,&ty);
		x3 = x1 +tx;
		x4 = x2 + tx;
		y3 = y1 +ty;
		y4 = y2 + ty;
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);

	

	glBegin(GL_LINES);
		glVertex2i(x1,y1);
		glVertex2i(x2,y2);
		glVertex2i(x3,y3);
		glVertex2i(x4,y4);

	glEnd();
	glFlush();
	printf("\nOver");
	return;
}

void main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("lines");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);	
	glutMainLoop();
}

