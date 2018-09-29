#include <iostream>

int main(int argc,char *argv[]){
  double number, intervalStart, intervalEnd; // initiating variables
  //input
  scanf ("%lf%lf%lf",&number, &intervalStart, &intervalEnd);
//is the number in the interval (intervalStart,intervalEnd]
  if (number > intervalStart && number <= intervalEnd){
    printf("TAIP");
  }else{
    printf("NE");
  }

  return 0;
}
