#include <iostream>
#include <math.h>

// three points of a 2d triangle are given, calculate area

int main(int argc, char *argv[])
{
    double x1, x2, x3, y1, y2, y3;//coordinates
    double l1, l2, l3;// lengths
    double p, s; //area

    scanf("%lf%lf%lf%lf%lf%lf", &x1 , &y1 , &x2 , &y2 , &x3 , &y3);

    l1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    l2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    l3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    p=(l1+l2+l3)/2;
    s=sqrt(p*(p-l1)*(p-l2)*(p-l3));

    printf ("%.1lf",s);


    return 0;
}
