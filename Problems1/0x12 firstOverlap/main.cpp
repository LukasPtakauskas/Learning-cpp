#include <iostream>

// when do sequences
// I b, b + a, b + 2a, b + 3a
//II d, d + c, d + 2c, d + 3c
// overlap the first time, print that number. else print -1
int main (int argc, char *argv[]){
  int a,b,c,d, ck=10000;
  long long number1,number2,  overlap=-1;

  scanf("%d%d%d%d", &a, &b, &c ,&d);

  for(int i =0; i< ck; i++)
  {
    number1 = b + (a * i);
    for (int i2 =0; i2<ck;i2++)
      {
        number2 = d + (c * i2);
        if (number1 == number2){
          overlap=number1;
          break;
        }
      }
    if (overlap!=-1){
      break;
    }
  }


  printf("%lld",overlap);

  return 0;
}
