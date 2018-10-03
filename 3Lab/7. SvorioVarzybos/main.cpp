#include <iostream>
/*
Petriukas nori tapti didžiausiu lokiu
ar bent jau tapti didesnis nei jo brolis Algelis.
Šiuo metu Petriukas ir Algelis sveria atitinkamai po a ir b.
Garantuojama, kad Petriuko svoris yra mažesnis arba lygus jo brolio svoriui.
Petriukas daug valgo ir kiekvienais metais jo svoris trigubėja,
o Algelio - dvigubėja.
Po kiek metų Petrtiukas pirmą kartą taps griežtai sunkesnis nei Algelis?
*/



int main(int argc, char *argv[]){

int a,b; // input weights. to imagine a is smaller or equal.
int years=0; // how many years it'll take to satisfy a>b

scanf("%d%d", &a,&b);

// just double checking inputs. I really want a to be smaller.
if (a>b){
  a = a + b;
  b = a - b;
  a = a - b;
}

while(a<=b) // stops running when a>b
{
  years++;
  a = a * 3;
  b = b * 2;
//  printf("y:%d| a-%d |b-%d\n",years,a,b);//checking how it works.
}
printf("%d",years);



  return 0;
}
