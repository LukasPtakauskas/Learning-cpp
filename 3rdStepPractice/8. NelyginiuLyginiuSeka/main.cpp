#include <iostream>

/*
Seką sudaro visi skaičiai nuo 1 iki N (imtinai).
Pirmiausia išeilės surašyti visi nelyginiai skaičiai,
tik paskiau išeilės visi lyginiai.
Parašykite programą, kuri generuotų šią seką.
*/

int main(int argc, char *argv[]){
int number; // input number

scanf("%d",&number);// input

//output
for(int i =1 ; i <= number ; i=i+2)
{
  if (number == 1){
    printf("%d",i);
  }else{
    printf("%d,",i);
  }
}
for(int i =2 ; i <= number ; i=i+2)
{
  if (i == number || i + 1 == number)
  {
    printf("%d",i);// the lst number will not have ',' after it.
  }else{
  printf("%d,",i);
  }
}



  return 0;
}
