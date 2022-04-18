#include<windows.h>
#include<GL/glut.h>
void display(void)
{
    glBegin(GL_QUADS);

    glColor3f(118,181,197);

    glVertex2f(0.5,0.5);
    glVertex2f(2,0.5);
    glVertex2f(2,2);
    glVertex2f(0.5,2);
    glEnd();

    //left window
    glBegin(GL_QUADS);

    glColor3f(1.0,0.0,1.0);

    glVertex2f(0.6,1.0);
    glVertex2f(0.9,1.0);
    glVertex2f(0.9,1.4);
    glVertex2f(0.6,1.4);
    glEnd();

    //Right window
    glBegin(GL_QUADS);

    glColor3f(1.0,0.0,1.0);

    glVertex2f(1.6,1.0);
    glVertex2f(1.9,1.0);
    glVertex2f(1.9,1.4);
    glVertex2f(1.6,1.4);
    glEnd();

    //Door
    glBegin(GL_QUADS);

    glColor3f(0.0,1.0,1.0);

    glVertex2f(1.0,0.5);
    glVertex2f(1.5,0.5);
    glVertex2f(1.5,1.7);
    glVertex2f(1.0,1.7);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(1,0.5,0.5);

    glVertex2f(0.5,2);
    glVertex2f(1.25,3);
    glVertex2f(2,2);

    glEnd();

    glFlush();
}
void home(void)
{
    glClearColor(1,1,1,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,3.0,0.0,3.0,-10.0,10.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Home Practice");
    home();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
