#include <iostream>

/*Ant stalo guli n degtukų.
 Parašykite programą, kuri nustatytų,
 ar iš tų degtukų galima sudėlioti bent vieną iš šių figūrų:
 lygiakraštį trikampį,
 stačiakampį,
 kvadratą.
 Dėliojamai figūrai būtina panaudoti visus degtukus ir degtukų laužyti negalima.
*/
int main(int argc, char *argv[]){
  int number; // matchstick amount
  //Input
  scanf ( "%d" , &number );
/* lygiakraštis trikampis:
  bent 3 degtukai,
  dalus is triju.

  kvadratas:
  dalus is 4,
  bent 4 degtukai.

  staciakampis:
  bent 4 degtukai,
*/

  if
  (
    (number >= 3 && number%3==0) || // trikampis
    //(number >=4 && number%4==0) || //kvadratas, galima ir netikrinti, mat yra staciakampiu aibeje.
    (number >=4 && number%2==0) //staciakampis
  )
  {
    printf("TAIP");
  }
  else
  {
    printf("NE");
  }



  return 0;
}
