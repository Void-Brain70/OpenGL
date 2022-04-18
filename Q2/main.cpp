#include <bits/stdc++.h>
#include <windows.h>
#include <GL/glut.h>
#define M_PI 3.1415926535897932384626433832795
using namespace std;

float centerx, centery, radius, pointx, pointy;

void display(void)
{
    glBegin(GL_LINE_LOOP);

    glColor3f(0,0,1);


    for(float i=0;i<=360;i=i+0.0002)
    {
        float x = radius*cos((i*M_PI)/180) + centerx;
        float y = radius*sin((i*M_PI)/180) + centery;
        glVertex2f(x,y);
    }

    glEnd();

    glBegin(GL_POINTS);
    if(pow(pointx-centerx, 2) + pow(pointy-centery, 2) <= pow(radius, 2)){ // (x-center_x)^2 + (y - center_y)^2 < radius^2
      glColor3f(0, 1, 0);
    }
    else{
      glColor3f(1, 1, 1);
    }
    glVertex2f(pointx, pointy);
    glEnd();

    glFlush();
}
int main(int argc, char**argv)
{
    cout << "Enter the center coordinate of circle >> ";
    cin >> centerx >> centery;
    cout << "Enter the radius of the circle >> ";
    cin >> radius;
    cout << "Enter the point coordinate >> ";
    cin >> pointx >> pointy;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Draw a Circle use polygon");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
