#include <iostream>
/*
Lentoje buvo užrašyti keturi nenuliniai skaičiai a,b,s,d,
kurie tenkino sąlygas s=a+b, d=a*b.
Petriukas du skaičius nutrynė ir vietoje jų užrašė nulius.
Padėkite atstatyti visus skaičius, jeigu yra žinoma, kad bent vienas iš skaičių a arba b yra nenutrintas.
*/
int main(int argc,char *argv[]){
  double a,b,suma,daugyba;//suma=a+b, daugyba=a*b.
  scanf ( "%lf%lf%lf%lf" , &a , &b , &suma , &daugyba );
  //printf("%.0lf %.0lf %.0lf %.0lf" , a , b , suma , daugyba );
 if(a==0){
   if (suma == 0)
   {
     a = daugyba / b;
     suma = a + b;
   }
   else
   {
     a = suma - b;
     daugyba = a * b;
   }

 }
 else if (b==0)
 {
   if (suma == 0)
   {
     b = daugyba / a;
     suma = a + b;
   }
   else
   {
     b = suma - a;
     daugyba = a * b;
   }
 }
 else
 {
   suma = a + b;
   daugyba = a * b;
 }
 printf("%.0lf %.0lf %.0lf %.0lf" , a , b , suma , daugyba );

  return 0;
}
