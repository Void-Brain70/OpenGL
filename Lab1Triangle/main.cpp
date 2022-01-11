#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1,0.5,0.5);

    glVertex2f(0,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.5,1);

    glVertex2f(-0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,-1);
    glVertex2f(-0.5,-1);

    glEnd();

    glFlush();

}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
