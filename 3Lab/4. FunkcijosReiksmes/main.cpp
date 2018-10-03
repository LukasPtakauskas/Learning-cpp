#include <iostream>
#include <math.h>

/*Žinomi kvadratino trinario y = Ax2 + BX + C koeficientai A,B,C.
Sukurkite programą, skaičiuojančią kvadratinio trinario reikšmes,
kai x kinta nuo -3 iki 3 žingsniu lygiu 1.*/

int main(int argc, char *argv[]){
int a,b,c; // coefficients of the quadratic equation
int y; // quadratic equation solution

scanf("%d%d%d",&a,&b,&c);

for (int x = -3; x <= 3 ; x++)
{
  y = a * pow ( x , 2 ) + b * x + c;
  printf("Kai x=%d, tai y=%d\n",x,y);
}


  return 0;
}
