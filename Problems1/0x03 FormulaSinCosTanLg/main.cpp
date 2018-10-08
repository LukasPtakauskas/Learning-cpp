#include <iostream>
#include <math.h>

// this solves x = 2 * sin(a) + (cos(b) - sqrt(tan(b))) * (log10(a))^5;

int main(int argc, char *argv[]){
  float a, b; // input these
  float x;
  scanf("%f%f",&a,&b);
  x =  2 * (sin(a)) + (cos(b) - sqrt(tan(b))) * log10(a)* log10(a)* log10(a)* log10(a)* log10(a);
  printf("%.2f", x);

  return 0;
}
