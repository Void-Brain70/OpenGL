#include<windows.h>
#include<GL/glut.h>

void display(void)
{
    glBegin(GL_POINTS);

    float i;
    for(i=-1;i<=1;i=i+0.01)
    {
        glVertex2f(i,i);
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
    glutCreateWindow("Draw a line with points");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
