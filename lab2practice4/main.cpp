#include<windows.h>
#include<GL/glut.h>
#include<cmath>
#include<math.h>
void display(void)
{
    glBegin(GL_POINTS);

    glColor3f(1,0.5,0.5);

    for(float i=-1;i<=1;i= i+0.002)
    {
        glVertex2f(i,asin(i));
    }
    glEnd();
    glFlush();
}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Draw a sine wave with points");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
