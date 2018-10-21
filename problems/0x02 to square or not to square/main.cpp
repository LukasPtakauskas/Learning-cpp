#include <iostream>
#include <math.h>
/*
#To square(root) or not to square(root)

Write a method, that will get an integer array as parameter and will process
every number from this array.
Return a new array with processing every number of the input-array like this:

If the number has an integer square root, take this, otherwise square the number.

[4,3,9,7,2,1] -> [2,9,3,49,4,1]
*/

int main(int argc, char *argv[]){
  int input [] = { 4, 3, 9, 7, 2, 1 };
  int output [6];
  int arrlength = 6;
  int t2;
  float t1;

  for (int i = 0; i < arrlength ; i++){
    t1 = sqrt(input[i]);
    t2 = sqrt(input[i]);
    if (t1 == t2 ){
      output[i] = sqrt(input[i]);
    }
    else
    {
      output[i] = pow(input[i],2);
    }
    if (i < arrlength-1){
      printf ("%d,", output[i]);
    }
    else
    {
      printf ("%d", output[i]);
    }
    //printf("%d : %lf = %s\n", t2, t1 , (t2 == t1) ? "True":"False");
  }

  return 0;
}
