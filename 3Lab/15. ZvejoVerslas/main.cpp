#include <iostream>

/*
Petriukas įsidarbino žuvies ūkyje, kuriame alga priklauso nuo sugautų žuvų kiekio.
Už pirmą žuvį mokama n centų,
o už kiekvieną sekančią žuvį n kartų daugiau,
nei už ankstesnę.
Padėkite Petriukui suskaičiuoti,
kiek jis uždirbtų pinigų,jei pagautų m žuvų.
Užtikriname, kad Petriuko uždirbtų pinigų suma neviršija 10^16.
*/

int main(int argc, char *argv[]){
  long int  n,m; //inputs
  long int  value; // current fish value
  long int  sum=0; // how much earned

  scanf("%ld%ld",&n,&m );
  value = n;
  for (int i =1 ; i <= m;i++)
  {
      sum += value;
      value = value * n ;
  }

  printf("%ld",sum);
  return 0;
}
