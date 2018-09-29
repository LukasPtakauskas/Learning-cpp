#include <iostream>

int main(int argc, char *argv[]){
int sideA , sideB; // rectangle sides
 int result;
 //Input
 scanf ( "%d%d" , &sideA , &sideB );
// if it is a Square, calculate area
//else calculate perimeter
  if ( sideA == sideB ){
    result =  sideA  * sideB;
  }else{
    result =  2 * ( sideA + sideB );
  }
printf ( "%d\n" , result );

  return 0;
}
