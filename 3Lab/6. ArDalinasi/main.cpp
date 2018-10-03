#include <iostream>
/*
Raskite visus dviženklius skaičius,
kurie dalinasi ir iš A ir iš B.
*/

int main(int argc, char *argv[]){
int A,B; // numbers to input. we'll see what double digit numbers are divisable by A and B.
int min; // from what number do we start the search.
bool divisableFound = false;
scanf("%d%d", &A, &B);

//this sets the starting perimeter of the for loop
if (A>=B)
{
  if(A>=10)
  {
      min = A;
  }
  else
  {
    min = 10;
  }
}
else
{
  if(B>=10)
  {
      min = B;
  }
  else
  {
    min = 10;
  }
}

for (int i = min ; i<=99 ; i++ )
{
  if (i%A==0 && i%B==0){
    divisableFound = true;
    printf("%d\n",i);
  }

}

if (!divisableFound)
  printf("NERA");

  return 0;
}
