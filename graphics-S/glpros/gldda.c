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
	float x,y,x1=0.0,y1=100.0,x2=500.0,y2=100.0,dx,dy,pixel;
	dx=abs(x2-x1);
	dy=abs(y2-y1);

    	if(dx>=dy)
    		pixel=dx;
    	else
    		pixel=dy;

   	dx=dx/pixel;
    	dy=dy/pixel;

    	x=x1;
    	y=y1;

    	i=1;	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);

	while(i<=pixel)
    	{
        	glVertex2i(x,y);
        	x=x+dx;
        	y=y+dy;
          	i=i+1;
        }
	glEnd();
	glFlush();
}

void main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("DDA Line Using OpenGL");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);	
	glutMainLoop();
}
		
