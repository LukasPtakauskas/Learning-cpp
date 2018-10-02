#include <iostream>
#include <math.h>

int main (int argc, char * argv[]){
  int sideA, sideB, sideC; // trikampio krastines

  scanf("%d%d%d",&sideA, &sideB, &sideC);


if (( sideA + sideB > sideC ) && ( sideA + sideC > sideB ) && ( sideB + sideC > sideA ))
  {
    printf("TAIP ");
//kampu paieska
// jeigu istrizaine ^2 = statinis1^2 + statinis2^2
// tai trikampis STATUS
// jeigu istrizaine ^2 > statinis1^2 + statinis2^2
// tai trikampis BUKAS
// jeigu istrizaine ^2 < statinis1^2 + statinis2^2
// tai trikampis SMAILUS

//padarysiu kad sideA butu didziausia krastine
    if(sideA<sideB)
    { // no tmp switch, ninja
      sideA = sideA + sideB; // a+b
      sideB = sideA - sideB; // a+b-b = a
      sideA = sideA - sideB; // a+b-a =b
    }
    if(sideA<sideC)
    {
      sideA = sideA + sideC;
      sideC = sideA - sideC;
      sideA = sideA - sideC;
    }
//padaryta
/* catching bugs.
int a = pow ( sideA , 2 );
int b = pow ( sideB , 2 );
int c = pow ( sideC , 2 );

printf("%d  = %d  + %d \n", a ,  b , c );
*/
    if ( pow ( sideA , 2 ) ==  pow ( sideC , 2 ) + pow ( sideB , 2 ) )
    {
      printf("STATUS");
    }
    else if ( pow ( sideA , 2 ) >  pow ( sideC , 2 ) + pow ( sideB , 2 ) )
    {
      printf("BUKAS");
    }
    else if ( pow ( sideA , 2 ) <  pow ( sideC , 2 ) + pow ( sideB , 2 ) )
    {
      printf("SMAILAS");
    }
    else
    {
      printf("?");
    }




// kampu paieskos baigtis
  }else{
    printf("NE");
  }

//printf("NEq");
  return 0;
}
