#include <iostream>
#include <math.h>
// find quadratic equation solution(s) with given coefficients
int main(int argc, char *argv[])
{
    double a, b, c, d, x1, x2;// coefficients , Discriminant, solutions
    scanf("%lf%lf%lf",&a, &b, &c);

    d=b*b-4*a*c;

    if (d<0)
      printf("NO");
    else if (d!=0)
    {
      x1=(-1*b+sqrt(d))/(2*a);
      x2=(-1*b-sqrt(d))/(2*a);
      if (x1>x2)
        std::swap(x1,x2);
      printf("%0.lf_%.0lf", x1, x2);
    }
    else
    {
      x1=(-1*b)/(2*a);
      printf("%0.lf", x1);
    }

  return 0;
}
