#include <GL/glut.h>
#include<stdio.h>



void init() {

	glClearColor(1.0, 1.0, 1.0, 0.0);

	glColor3f(0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glOrtho(0, 480, 0, 640,-1,1);

}



void display() {

	GLfloat midY = 240;

	GLfloat midX = 320;



	GLfloat y = 0;

	GLfloat x = -200;

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POINTS);

		for( x = -200; x <= 200; x+=0.05) {

			y = x*x;

			glVertex2f(midX + x, midY + y);

		}

	glEnd();

	glFlush();

}



int main(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitWindowPosition(200, 400);

	glutInitWindowSize(640, 480);

	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);

	glutCreateWindow("Quadratic Formula");

	init();

	glutDisplayFunc(display);

	glutMainLoop();



	return 0;

}

