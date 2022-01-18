#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glBegin(GL_POINTS);

    glColor3f(1,0.5,0.5);


    for(float i=-1; i<=1;i=i+0.02)
    {
        glVertex2f(i,i);
    }

    /*
    for(float i = 0;i<=1;i+=0.002)
    {
        glVertex2f(i,i);
    }
    for(float j = 0;j<=1;j+=0.002)
    {
        glVertex2f(-j,-j);
    }*/
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
