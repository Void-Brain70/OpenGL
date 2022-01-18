#include<windows.h>
#include<GL/glut.h>
#include<cmath>
#include<math.h>
#define M_PI 3.1415926535897932384626433832795
#define r 0.5
void display(void)
{
    glBegin(GL_POLYGON);

    glColor3f(1,0.5,0.5);


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
    glutCreateWindow("CSE 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
