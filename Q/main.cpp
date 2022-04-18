#include <bits/stdc++.h>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

vector<vector<float>> vec;

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    int len = vec.size();
    for(int i = 0; i < len; i++){
      glBegin(GL_LINES);
      glColor3f(vec[i][0], vec[i][1], vec[i][2]);
      glVertex2f(vec[i][3], vec[i][4]);
      glVertex2f(vec[i][5], vec[i][6]);
      glEnd();
    }
    glFlush();

}


int main(int argc, char** argv)
{
    int n;
    cout << "Enter the number of lines >> ";
    cin >> n;
    for(int i = 0; i < n; i++){
      float a, b, c, d, e, f, g;
      cout << "Enter " << i+1 << "th number color code >> ";
      cin >> a >> b >> c;
      cout << "Enter " << i+1 << "th number first coordinate >> ";
      cin >> d >> e;
      cout << "Enter " << i+1 << "th number second coordinate >> ";
      cin >> f >> g;
      vector<float> temp;
      temp.push_back(a);
      temp.push_back(b);
      temp.push_back(c);
      temp.push_back(d);
      temp.push_back(e);
      temp.push_back(f);
      temp.push_back(g);
      vec.push_back(temp);
    }
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B1");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
