#include <iostream>
#include <math.h>
#include <iomanip>
// this solves x =( b+ sqrt(b^2 - a*c) ) / 2*a

int main(int argc, char *argv[]){
  double  a, b, c; // input the
  double x;
  scanf("%lf%lf%lf",&a,&b,&c);
  x = ( b + sqrt(pow (b,2) - (a*c)) ) / (2*a);

  /*
  // rounding the number
  x = round(x * 1000);
  x = x / 1000;
  printf("%.3lf",x);
  */
  std::cout<<std::fixed<<std::setprecision(3)<<x << "\n";

  return 0;
}
