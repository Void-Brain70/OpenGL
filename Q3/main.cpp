#include <bits/stdc++.h>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

float innerRadius, outerRadius, sides, rings;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
    glColor3f(0, 1, 0);
    glutWireTorus(innerRadius, outerRadius, sides, rings);
    glFlush();
}

float xx, yy, angle, znear, zfar;

void reshape(int w, int h)
{
    glViewport(xx, yy, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(angle, w/h, znear, zfar);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    cout << "Enter the parameters of torus >> ";
    cin >> innerRadius >> outerRadius >> sides >> rings;
    cout << "Enter the parameters of perspective >> ";
    cin >> angle >> znear >> zfar;
    cout << "Enter the parameters of viewport >> ";
    cin >> xx >> yy;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B1");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
