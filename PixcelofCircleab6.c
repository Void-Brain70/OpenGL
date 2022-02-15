#include<stdio.h>
#include<math.h>
# define pi 3.14159265
int main()
{
    float r,x,y;
    scanf("%f%f%f",&r,&x,&y);
    for(float i =0;i<360;i= i+5)
    {
        float xa = round(r*cos((i*pi)/180))+x;
        float ya = round(r*sin((i*pi)/180))+y;
        printf("%.0f  %0.f\n",xa,ya);
    }
    return 0;
}

