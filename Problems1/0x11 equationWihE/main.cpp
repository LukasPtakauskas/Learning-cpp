#include <iostream>
#include <math.h>

// solves equation (5 * x^3 + sin^2(e^(3x) - 16*x^2))/((sin(4*x)/(cos(4*x)+1))+!0)

int main (int argc, char *argv[] ){
  int x;
  //double EulersNumber=2.7182818284590452353602874713527;
  double equation;
  scanf("%d", &x);

//  equation = (5 * x*x*x + sin(pow(EulersNumber,3*x)*sin(pow(EulersNumber,3*x) - 16*x*x)))
equation = (5 * x*x*x + sin(exp(3*x)*sin(exp(3*x) - 16*x*x)))

                    /
                ((sin(4*x)/(cos(4*x)+1))+1);
  printf("%.2lf", equation);
return 0;
}
