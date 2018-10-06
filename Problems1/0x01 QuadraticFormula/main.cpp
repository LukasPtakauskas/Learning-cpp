#include <iostream>
#include <math.h>
// this solves x =( b+ sqrt(b^2 - a*c) ) / 2*a

int main(int argc, char *argv[]){
  int  a, b, c; // input the
  double x;
  scanf("%d%d%d",&a,&b,&c);
  x = (float)( b + sqrt(pow (b,2) - a*c) ) / (float)(2*a);
  printf("%.3lf",x);


  return 0;
}
