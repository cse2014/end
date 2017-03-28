#include<stdio.h>

#include<GL/glut.h>
GLint i=0;
void myInit()
{
 glClearColor(1,1,1,1);
 glColor3f(1,1,1);
}
void display()
{
 while(i<1300)
 {
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1,0,1);
 glBegin(GL_POLYGON);
 glVertex2f(-.2,0);
 glVertex2f(0,.2);
 glVertex2f(.2,0);
 glVertex2f(0,-.4);
 glEnd();

 glColor3f(1,1,1);
 glBegin(GL_LINE_LOOP);
 glVertex2f(0,0);
 glVertex2f(-.2,0);
 glVertex2f(.2,0);
 glVertex2f(0,.2);
 glVertex2f(0,-.4);
 glEnd();

 glColor3f(0,0,0);
 glBegin(GL_LINE_STRIP);
 glVertex2f(0,-.4);
 glVertex2f(-.05,-.5);
 glVertex2f(.05,-.6);
 glVertex2f(-.05,-.7);
 glEnd();

 glFlush();
 //delay(300);
 glClear(GL_COLOR_BUFFER_BIT);
 
 glColor3f(1,0,1);
 glBegin(GL_POLYGON);
 glVertex2f(-.2+.05,0+.05);
 glVertex2f(0+.05,.2+.05);
 glVertex2f(.2+.05,0+.05);
 glVertex2f(0+.05,-.4+.05);
 glEnd();

 glColor3f(1,1,1);
 glBegin(GL_LINE_LOOP);
 glVertex2f(0+.05,0+.05);
 glVertex2f(-.2+.05,0+.05);
 glVertex2f(.2+.05,0+.05);
 glVertex2f(0+.05,.2+.05);
 glVertex2f(0+.05,-.4+.05);
 glEnd();

 glColor3f(0,0,0);
 glBegin(GL_LINE_STRIP);
 glVertex2f(0+.05,-.4+.05);
 glVertex2f(-.05+.05,-.5+.05);
 glVertex2f(.05+.05,-.6+.05);
 glVertex2f(-.05+.05,-.7+.05);
 glEnd();
 glFlush();
 //delay(300);

 glClear(GL_COLOR_BUFFER_BIT);
 
 glColor3f(1,0,1);
 glBegin(GL_POLYGON);
 glVertex2f(-.2,0+.05);
 glVertex2f(0,.2+.05);
 glVertex2f(.2,0+.05);
 glVertex2f(0,-.4+.05);
 glEnd();

 glColor3f(1,1,1);
 glBegin(GL_LINE_LOOP);
 glVertex2f(0,0+.05);
 glVertex2f(-.2,0+.05);
 glVertex2f(.2,0+.05);
 glVertex2f(0,.2+.05);
 glVertex2f(0,-.4+.05);
 glEnd();

 glColor3f(0,0,0);
 glBegin(GL_LINE_STRIP);
 glVertex2f(0,-.4+.05);
 glVertex2f(-.05,-.5+.05);
 glVertex2f(.05,-.6+.05);
 glVertex2f(-.05,-.7+.05);
 glEnd();
 glFlush();
//delay(300);

 i+=5;
 }
}
int main(int argc,char** argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(500,500);
 glutCreateWindow("KITE");
 glutDisplayFunc(display);
 myInit();
 glutMainLoop();
}

