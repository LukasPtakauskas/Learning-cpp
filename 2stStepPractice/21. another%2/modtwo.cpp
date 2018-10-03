#include <iostream>

int main (int argc, char *argv[])
{
  int number; // if this number mod 2 == 0 AND number/2 mod 2 == 0 also, then all good, else bad.
  scanf("%d",&number);

  if (number % 4 == 0){
    printf("TAIP");
  }
  else
  {
      printf("NE");
  }




  return 0;
}
