#include <iostream>

int main (int argc,char *argv[]){
  //Duotas skaičius x bei du intervalai (a;b] ir [c;∞). Ar tiesa, kad x nepatenka į nei vieną intervalą?
  double number, interval1Start, interval1End, interval2Start; // variables
//input
  scanf("%lf%lf%lf%lf" , &number , &interval1Start , &interval1End , &interval2Start);
  //if number is in any interval, then statement is false.
  //if number isn't in any interval, then statement is true.
  if ( (number>interval1Start && number <=interval1End ) || (number >= interval2Start))
  {
    printf("NE");
  }
  else
  {
    printf("TAIP");
  }

  return 0;
}
