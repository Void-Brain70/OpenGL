#include<windows.h>
#include<GL/glut.h>
#include<cmath>
#include<math.h>
#define M_PI 3.1415926535897932384626433832795
#define r 0.5
void display(void)
{
    glBegin(GL_QUADS);

    glColor3f(0,1,0);

    glVertex2f(1,0.6);
    glVertex2f(-1,0.6);
    glVertex2f(-1,-0.6);
    glVertex2f(1,-0.6);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);

    for(float i=0;i<=360;i=i+0.0002)
    {
        float x = r*cos((i*M_PI)/180);
        float y = r*sin((i*M_PI)/180);
        glVertex2f(x,y);
    }
    glEnd();
    glFlush();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bangladesh Flag");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
