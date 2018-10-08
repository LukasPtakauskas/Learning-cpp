#include <iostream>

// rectangle side lengths are given, find the area of a circle within the rectangle

int main(int argc, char *argv[])
{
    double myPi=3.14159265359;
    double a, b; // rectangle sides
    double s;

    scanf("%lf%lf", &a, &b);

    if (a<b)
      s=myPi*a*a/4;
    else
      s=myPi*b*b/4;

    printf("%.2lf",s);

    return 0;
}
