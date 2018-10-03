#include <iostream>

int main(int argc, char *argv[])
{
  double a,b,c,d; // the lenghts of sticks the mole has.
  /* the mole's plan is to use these sticks to make a rectangle.
  can he?
  if  the lenghts of the sticks are in pairs, then he can. */
  scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

  if ( a == b & c == d )
  {
    printf("PAVYKS");
  }
  else if (a == c && b == d)
  {
    printf("PAVYKS");
  }
  else if(a==d && c==b)
  {
  printf("PAVYKS");
  }
  else
  {
  printf("NEPAVYKS");
  }

  return 0;
}
