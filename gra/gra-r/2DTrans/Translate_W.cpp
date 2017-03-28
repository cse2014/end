#include<iostream> 
#include "GL/glut.h"
using namespace std;
double lower_x=-600; double lower_y=-600;
double upper_x=600; double upper_y=600;
void draw_axes()
{
	float old_color[4];
	glGetFloatv(GL_CURRENT_COLOR, old_color);
	glColor3f(1,1,0.5);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();
	glBegin(GL_LINES);
		glVertex2f(lower_x,0), glVertex2f(upper_x,0);
		glVertex2f(0,lower_y), glVertex2f(0,upper_y);
	glEnd();
	glFlush();
	glPopMatrix();
	glColor3f(old_color[0],old_color[1],old_color[2]);

}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	draw_axes();
	glMatrixMode(GL_MODELVIEW);
	
	glLoadIdentity();
	glColor3f(0.0,0.0,1.0);   
	glRectf(50,100,200,150);   // Original Rectangle Blue 
	
	glColor3f(1.0,0.0,0.0);		
	glTranslatef(-200,-50,0);    // Translated Rectangle Red
	glRecti(40,100,190,150);
	
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(600,600);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Translate");

	glutDisplayFunc(display);
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(-600,600,-600,600);
	
	glClearColor(1.0,0.5,.5,1.0);
	glutMainLoop();
}

