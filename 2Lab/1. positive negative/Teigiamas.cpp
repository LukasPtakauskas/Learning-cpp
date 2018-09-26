#include <math.h>
#include <iostream>

int main(int argc, char *argv[]){
  double Number;
  bool isNegative;
  //Input
  scanf("%lf",&Number);
  // a simple if statement to check if it is positive or negative
  //printf("signbit(Number)= %d",signbit(Number));//testing purposes
  isNegative = signbit(Number);

  // 0 is a neutral number, therefore it isn't postive or negative.
  if (Number == 0)
  {
    printf("NE");
  }
  else if (isNegative)
  {
    printf("NE");
  }
  else
  {
    printf("TAIP");
  }

  return 0;
}
