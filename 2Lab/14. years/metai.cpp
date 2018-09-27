#include <iostream>
// reikia isvesti atitinkama zodi metai arba metu.
// kaip veikia lietuviu kalba.
/*


*/
int main (int argc, char *argv[]){
  int years;
scanf ("%d", &years);
/*
biulding blocks
  printf("%.0lf metai",years);
printf("%.0lf metu",years);
*/

// paskaiciavau iki simto balsu ir pagavau, kad nuo vienuolikos iki devyniolikos sakau metu, taip pat kai desimtys eina irgi "metu".
 if (years%100>10 && years%100<20 || years%10==0)
{
  printf("%d metu",years);
}
else
{
  printf("%d metai",years);
}




  return 0;
}
