#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glBegin(GL_POLYGON);

    glColor3f(1,0.5,0.5);

    glVertex2f(-0.6,0.2);
    glVertex2f(0,0.6);
    glVertex2f(0.6,0.2);
    glVertex2f(0.3,-0.6);
    glVertex2f(-0.3,-0.6);

    glEnd();
    glFlush();
}


int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Polygon");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
