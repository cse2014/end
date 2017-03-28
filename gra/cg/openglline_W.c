#include<GL/glut.h>
#include<stdio.h>
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
	int x1,y1,x2,y2;
	//scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	linee(0,0,10,20);
	glColor3f(0.0,1.0,0.0);
	//int x1,y1,x2,y2;
	//scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	linee(0,0,10,10);
	glFlush();
}

int main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Line Using OpenGL");
	init2D(1.0,1.0,1.0);
	glutDisplayFunc(display);	
	glutMainLoop();
	return 0;
}
		
