#include <iostream>
#include <math.h>

//Atspausdinkite visų skaičių nuo a iki n (imtinai) kvadratus.
int main(int argc, char *argv[]){
  int number1, number2; // interval is [number1, number2]
scanf ("%d%d",&number1, &number2);

  for (int i=number1 ;i <=number2 ; i++){
      printf("%d\n", (int)(pow(i,2)) );
  }

  return 0;
}
