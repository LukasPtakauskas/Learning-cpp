#include <iostream>

//Apskaičiuokite sumą skaičių nuo a iki n (imtinai).
int main(int argc, char *argv[]){
  int number1, number2; //interval to sum all numbers [number1, number2]
  int sum ; // su of all those numbers!

  scanf ("%d%d",&number1, &number2);

  sum = number1;
  for (int i=number1+1 ;i <=number2 ; i++){
    sum += i;
  }
  printf("%d\n", sum );



  return 0;
}
