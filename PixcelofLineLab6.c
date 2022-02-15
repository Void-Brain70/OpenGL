#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float m = (y2 - y1) / (x2 - x1);
    float c = y1 - m*x1;
    float minx, maxx;

    if(x1>x2)
    {
        minx = x2;
        maxx = x1;
    }
    else
    {
        minx = x1;
        maxx = x2;
    }

    for (float i = minx; i <= maxx; i++)
    {
        float y = round(m*i + c);
        printf("%.0f %.0f\n",i, y);
    }
    return 0;
}
