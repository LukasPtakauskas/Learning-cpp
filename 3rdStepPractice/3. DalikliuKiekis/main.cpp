#include <iostream>

//Apskaičiuokite skaičiaus n daliklių kiekį.
int main(int argc, char *argv[]){
int number; // find divisors of this nubmer
int partNumber; /* useful to save some processing power
analysis will not go beyond this number*/
int divisorCount; //how many divisors does number have?
scanf("%d", &number);

if (number % 2 == 0)
{
  partNumber = number / 2;
}
else
{
  partNumber = number / 3;
}

divisorCount =1; /* must not forget that a number is divisable by itself!
this part is being excluded from the for loop*/

for (int i = 1 ; i <= partNumber;i++)
{
  if (number % i ==0){
    divisorCount++;
  }
}


printf("%d",divisorCount);




  return 0;
}
