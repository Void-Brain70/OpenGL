#include<windows.h>
#include<GL/glut.h>


void display(void)
{
    glBegin(GL_LINES);

    glColor3f(1,0.5,0.5);

    glVertex2f(0.5,0.5);
    glVertex2f(-0.5,-0.5);

    glVertex2f(-0.5,0.5);
    glVertex2f(0.5,-0.5);

    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.5,0.5);

    glVertex2f(0.5,-0.5);
    glVertex2f(-0.5,-0.5);

    glVertex2f(0.5,0.5);
    glVertex2f(0.5,-0.5);

    glVertex2f(-0.5,0.5);
    glVertex2f(0.5,0.5);

    glEnd();
    glFlush();
}


int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Lab 1 Practice 1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
