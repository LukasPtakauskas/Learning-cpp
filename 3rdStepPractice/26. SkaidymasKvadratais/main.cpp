#include <iostream>
/*
Duotą skaičių n išskaidykite į
kuo didesnių natūraliųjų skaičių kvadratų sumą.
*/
int main(int argc, char *argv[]){
int number; // input
scanf("%d",&number);

while (number >0){
//  printf("%d : ",number);

  for (int i = 1; (i*i)<=number;i++)
  {
    //printf("%d\n",i);
    if ((i+1) * (i+1)>number)
    {
      number -= i*i;
      if (number ==0)
      {
        printf("%d",i*i);
      }
      else
      {
        printf("%d+",i*i);
      }
    }
  }
}



  return 0;
}
