#include <iostream>

/*
Patikrinkite, kuriame koordinačių plokštumos ketvirtyje
(arba koordinačių ašyje) yra taškas (x;y).
Išvesti "I,II,III,IV ketvirtyje", "X,Y asyje" arba "Koordinaciu pradzia".
*/
int main(int argc,char *argv[]){
  int x,y; // coordinates
  scanf("%d%d" , &x , &y );//input
  if (x==0 && y==0)
  {
    printf("Koordinaciu pradzia");
  }
  else if(x==0 && y!=0)
  {
    printf("Y asyje");
  }
  else if(x!=0 && y==0)
  {
    printf("X asyje");
  }
  else if (x>0)
  {
    if (y>0)
    {
    printf("I ketvirtyje");
    }
    else
    {
    printf("IV ketvirtyje");
    }
  }
  else if(y>0)
  {
      printf("II ketvirtyje");
  }
  else
  {
    printf("III ketvirtyje");
  }









  return 0;
}
