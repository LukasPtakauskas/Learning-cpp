#include <iostream>
#include <math.h>

int main(int argc, char *argv[]){
  int number; // have to check if this number has three digits.
//int x; used for manual testing
  scanf ( "%d" , &number ); // input
  /* while loop for testing numbers
  while (number != 0){
    x = log10(number);
    printf("log10(%d)=%d\n",number,x);
    scanf ( "%d" , &number ); // input
    printf("number%d \n",number);
  }
*/
//checks if number has three digits, not more(3+), not less(0-1).
if ((int)(log10(number))==2)
{
  //  printf("TAIP%d",(int)(log10(number)));
  printf("TAIP");
}
else
{
  //  printf("NE%d",(int)(log10(number)));
  printf("NE");

}

  return 0;
}
