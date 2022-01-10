#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#include <GLUT/glut.h>
#include <OpenGL/OpenGL.h>

//Initialize OpenGL
void init(void) {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,300.0,0.0,300.0);
}

void drawLines(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.4,0.2);
    glPointSize(3.0);

    glBegin(GL_LINES);
    glVertex2d(180, 15);
    glVertex2d(10, 145);
    glEnd();
}

int main(int argc, char**argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutCreateWindow("Example");
    init();
    glutDisplayFunc(drawLines);
    glutMainLoop();
}
