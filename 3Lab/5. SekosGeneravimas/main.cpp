#include <iostream>
/*Pirmasis sekos narys yra x, o visi sekantys generuojami pagal taisyklę:
jei dabartinis narys x yra lyginis,
tai sekantis narys bus x/2, priešingu atveju bus 3x+1.
Parašykite programą, kuri sugeneruotų seką, kol bus gautas 1*/

int main(int argc, char *argv[]){
  int numberOSequence ; // the number of the sequence.
  scanf("%d",&numberOSequence);// input the first number for the sequence
  printf("%d",numberOSequence);
  while(numberOSequence!=1)
  {
    if (numberOSequence % 2 == 0)
    {
      numberOSequence = numberOSequence / 2;
    }
    else
    {
      numberOSequence = numberOSequence * 3 + 1;
    }
    printf(",%d",numberOSequence);
  }

  return 0;
}
