#include<stdbool.h>
#include <GL/glut.h>

// perspective
void view(void) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(-85.0, 1.0, 0.0, 0.0);
    glScalef(0.25, 0.25, 0.25);
}

void init(void) {
    glEnable(GL_DEPTH_TEST);
    glClearStencil(0);
    glEnable(GL_STENCIL_TEST);
}

void mirror(GLboolean inside, GLfloat vertSet[4][3]) {
    GLint i;
    if(inside)
        glBegin(GL_QUADS); // draw inside of mirror
    else
        glBegin(GL_LINE_LOOP); // draw frame of mirror
            for(i = 0; i < 4; i++)
                glVertex3fv(vertSet[i]);
    glEnd();
}

void scene(void) {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glutSolidTeapot(1.0);
    glPopMatrix();
}

void display(void) {
    GLfloat vertSet1[4][3] = {{-3.0, 3.0, 0.0}, {2.0, 3.0, 0.0}, 
        {2.0, 3.0, 2.0}, {-3.0, 3.0, 2.0}};

    view();

    // store mirror shape in the stencil buffer.
    glClear(GL_STENCIL_BUFFER_BIT);
    glStencilFunc(GL_ALWAYS, 1, 1);
    glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
    mirror(true, vertSet1);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // draw mirror frame.
    glColor3f(0.0, 0.0, 0.0);
    mirror(false, vertSet1);

    // draw scene outside mirror
    glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    glStencilFunc(GL_NOTEQUAL, 1, 1);
    scene();

    // draw reflection of scene in mirror
    glStencilFunc(GL_EQUAL, 1, 1);
    glTranslatef(0.0, 3.0, 0.0);
    glScalef(1.0, -1.0, 1.0);
    glTranslatef(0.0, -3.0, 0.0);
    scene();

    glFlush();
    glutSwapBuffers();
    glutPostRedisplay();
}

int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_STENCIL | GLUT_DEPTH);
    glutCreateWindow("");

    glClearColor(1.0, 1.0, 1.0, 0.0);

    init();

    glutDisplayFunc(display);

    glutMainLoop();
}
