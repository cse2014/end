#include<GL/glut.h>
#include<stdio.h>


void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-200.0,200.0,-150.0,150.0,-1,1);
}

void display(void)
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	int ch;
	printf("\nEnter the original starting points:");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the original end points:");
	scanf("%d %d",&x2,&y2);
	printf("\nEnter choice:1.about x-axis 2.about y-axis 3.about y=mx+c 4.about origin 5.about x=y 6.about x=-y\n");
	scanf("%d",&ch);
	if(ch==1)
		{
		x3 = x1;
		x4 = x2;
		y3 = -1*y1;
		y4 = -1*y2;
		}
	else if(ch==2)
		{
		x3=-1*x1;
		x4=-1*x2;
		y3=y1;
		y4=y2;
		}
	else if(ch==3)
		{
		printf("Enter m and c\n");
		int m,c;
		scanf("%d%d",&m,&c);
		float t=atan(m);
		x3=(x1*((cos(2*t)*cos(2*t))-(sin(2*t)*sin(2*t))))+(y1*(2*sin(t)*cos(t)))-(2*c*sin(t)*cos(t));
		y3=(y1*(-(cos(2*t)*cos(2*t))+(sin(2*t)*sin(2*t)))+(x1*(2*sin(t)*cos(t)))+(2*c*cos(t)*sin(t)));	
		x4=(x2*((cos(2*t)*cos(2*t))-(sin(2*t)*sin(2*t)))+(y2*(2*sin(t)*cos(t)))-(2*c*sin(t)*cos(t)));
		y4=(y2*(-(cos(2*t)*cos(2*t))+(sin(2*t)*sin(2*t)))+(x2*(2*sin(t)*cos(t)))+(2*c*cos(t)*sin(t)));
		}
	else if(ch==4)
		{
		x3=-x1;
		y3=-y1;
		x4=-x2;
		y4=-y2;
		}
	else if(ch==5)
		{
		x3=y1;
		y3=x1;
		x4=y2;
		y4=x2;
		}
	else if(ch==6)
		{
		x3=-y1;
		y3=-x1;
		x4=-y2;
		y4=-x2;
		}
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

