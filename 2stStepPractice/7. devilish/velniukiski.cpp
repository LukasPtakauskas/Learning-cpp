#include <iostream>
#include <math.h>
/*
Skaičius vadinamas velniukišku, jeigu jis dalinasi iš 66 ir nėra triženklis.
Patikrinkite, ar duotas skaičius x yra velniukiškas.
*/
int main (int argc, char *argv[]){
  int number;

  scanf("%d", &number); //input

  if ((number%66==0)&&(int)(log10(number))!=2){
    printf("TAIP");
  }
  else
  {
  printf("NE");
  }
  return 0;
}
