#include <iostream>
#include <math.h>

// coordinates of two points are given, this calculates the distance between the points

int main(int argc, char *argv[])
{
    double x1, x2, y1, y2;// input coordinates
    double dist; // distance
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2, &y2);

    x1=x2-x1;
    y1=y2-y1;
    dist=sqrt(y1*y1+x1*x1);
    printf("%.2lf",dist);


    return 0;
}
