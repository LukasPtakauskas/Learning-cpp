#include <iostream>
/*Laikas apibrėžiamas valandomis, minutėmis ir sekundėmis.
Raskite trečdalį laiko. Veiksmą pakartokite n kartų.*/
int main(int argc, char *argv[]){
  int n, h, min, sec; // input
  scanf("%d%d%d%d",&n,&h,&min,&sec);
  for (int i = 1 ; i<=n ; i++)
  {
      sec = sec / 3 + min%3 *20 ;
      min = min / 3 + h%3 *20;
      h = h/3;




      printf("%02d:%02d:%02d\n",h,min,sec);
  }



  return 0;
}
