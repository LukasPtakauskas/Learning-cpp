#include <iostream>

// find the last three digits of 2^n
int main(int argc, char *argv[])
{
    bool big=false;
    //printf("%s",big ? "true\n" : "false\n");
    int number=2,n;
    scanf("%d", &n);

    if (n == 0)
    {
      printf("1");
    }
    else
    {
      for (int i = 1; i<n; i++){
        number *=2;
        if (number > 1000)
        {
          big = true;
          number%=1000;
        }
      }
      if (big && number < 100){
        printf("0%d",number);
      }else{
        printf("%d",number);
      }
    }
    return 0;
}
