#include <iostream>

/*Apskaičiuokite skaičiaus n skaitmenų kiekį.*/


int main(int argc, char *argv[]){
  double number;
  int digitCount = 0; // how many digits does number have?
  scanf("%lf", &number);

  while (number > 9){
    number = number /10;
    digitCount++;
  }
  digitCount++;
printf("%d", digitCount);

  return 0;
}
