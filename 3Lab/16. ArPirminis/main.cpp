#include <iostream>

//Patikrinkite ar skaičius n yra pirminis.

int main(int argc, char *argv[]){
int number;// is this number prime
bool prime=true;

scanf("%d", &number);

if ( number%2 == 0 &&  number>2)
{
  prime = false;
}
else if (number <2)
{
  prime = false;
}
else
{
  for (int i = 3; i< number /2; i=i+2 ){
    if (number % i == 0)
      prime = false;
  }
}

if (prime)
{
  printf("TAIP");
}
else
{
  printf("NE");
}


  return 0;
}
