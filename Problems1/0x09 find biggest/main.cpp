#include <iostream>

//show the biggest number of the three

int main(int argc, char *argv[])
{
    int a, b, c;

    scanf("%d%d%d", &a,&b,&c);

    if (a>b)
    {
      if (a>c)
      {
        printf("%d",a);
      }
      else
      {
        printf("%d",c);
      }
    }
    else
    {
      if (b>c)
      {
        printf("%d",b);
      }
      else
      {
        printf("%d",c);
      }
    }



    return 0;
}
