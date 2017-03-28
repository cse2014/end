#include<stdio.h>
#include<GL/glut.h>
void init2D(float r,float g,float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0,200.0,0.0,150.0,-1,1);
}

void display(void)
{
	int shx,shy,c,x1,x2,x3,x4,y1,y2,y3,y4;
	printf("Enter the points of lines for the rectangle\n:");
	scanf("%d %d %d %d %d %d %d %d",&x1,&y2,&x2,&y2,&x3,&y3,&x4,&y4);	
	printf("\nEnter the choice below:\n1.X-axix Shear\n2.Y-axis Shear\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("\nEnter the shearing factor of x axis: ");
		scanf("%d",&shx);
		
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0,0.0,0.0);

	

	glBegin(GL_LINES);
		glVertex2i(x1,y1);
		glVertex2i(x2,y2);
		
		glVertex2i(x2,y2);
		glVertex2i(x3,y3);

		glVertex2i(x3,y3);
		glVertex2i(x4,y4);

		glVertex2i(x4,y4);
		glVertex2i(x1,y1);

	glEnd();
	glBegin(GL_LINES);
		glVertex2i(50+(10*shx),10);
		glVertex2i(100+(10*shx),10);
		glVertex2i(100+(10*shx),10);
		glVertex2i(100+(100*shx),100);
		glVertex2i(100+(100*shx),100);
		glVertex2i(50+(100*shx),100);
		glVertex2i(50+(100*shx),100);
		glVertex2i(50+(10*shx),10);



	glEnd();
	glFlush();
	break;
	case 2:
		printf("\nEnter the shearing factor of y axis: ");
		scanf("%d",&shy);
		
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0,0.0,0.0);

	

	glBegin(GL_LINES);
		glVertex2i(50,10);
		glVertex2i(100,10);
		glVertex2i(100,10);
		glVertex2i(100,100);
		glVertex2i(100,100);
		glVertex2i(50,100);
		glVertex2i(50,100);
		glVertex2i(50,10);

	glEnd();
	glBegin(GL_LINES);
		glVertex2i(50,10+(50*shy));
		glVertex2i(100,10+(100*shy));
		glVertex2i(100,10+(100*shy));
		glVertex2i(100,100+(100*shy));
		glVertex2i(100,100+(100*shy));
		glVertex2i(50,100+(50*shy));
		glVertex2i(50,100+(100*shy));
		glVertex2i(50,10+(10*shy));



	glEnd();
	glFlush();
	break;
	default:break;
	}
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

