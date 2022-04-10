#include <stdio.h>

int main(void)
{
    float xmin, xmax, ymin, ymax;
    float x1, y1, x2, y2;
    float x3, y3, x4, y4;

    int flag1, flag2;

    scanf("%f %f %f %f", &xmin, &xmax, &ymin, &ymax);
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    //first endpoint

    //inside
    if(x1>xmin && x1<xmax && y1>ymin && y1<ymax)
    {
        flag1  = 0;
        printf("%f %f", x1, y1);
    }
    //up-left
    else if(x1<xmin && y1>ymax)
    {
        flag1 = 5;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;

        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //up-right
    else if(x1>xmax && y1>ymax)
    {
        flag1 = 6;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }

    //bottom-left
    else if(x1<xmin && y1<ymin)
    {
        flag1 = 7;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //bottom-right
    else if(x1>xmax && y1<ymin)
    {
        flag1 = 8;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //up
    else if(y1>ymax)
    {
        flag1 = 1;

        x3 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3 = ymax;

        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }
    //bottom
    else if(y1<ymin)
    {
        flag1 = 2;

        x3 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3 = ymin;

        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }

    //left
    else if(x1<xmin)
    {
        flag1 = 3;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }

    //right
    else if(x1>xmax)
    {
        flag1 = 4;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }

    //second endpoint

    //inside
    if(x2>xmin && x2<xmax && y2>ymin && y2<ymax)
    {
        flag2  = 0;
        printf("%f %f", x2, y2);
    }
    //up-left
    else if(x2<xmin && y2>ymax)
    {
        flag2 = 5;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;

        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //up-right
    else if(x2>xmax && y2>ymax)
    {
        flag2 = 6;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4 = ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }

    //bottom-left
    else if(x2<xmin && y2<ymin)
    {
        flag2 = 7;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }

        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //bottom-right
    else if(x2>xmax && y2<ymin)
    {
        flag2 = 8;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
        x4 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4 = ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("%f %f", x4, y4);
        }
    }
    //up
    else if(y2>ymax)
    {
        flag2 = 1;
        x3 = x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3 = ymax;

        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }
    //bottom
    else if(y2<ymin)
    {
        flag2 = 2;
        x3 = x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3 = ymin;

        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }

    //left
    else if(x2<xmin)
    {
        flag2= 3;
        x3 = xmin;
        y3 = y1+(y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }

    //right
    else if(x2>xmax)
    {
        flag2 = 4;
        x3 = xmax;
        y3 = y1+(y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("%f %f", x3, y3);
        }
    }



    printf("%d %d", flag1, flag2);
    return 0;
}
