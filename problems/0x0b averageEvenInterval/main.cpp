#include <iostream>



//avg of even integers in interval [1,n]

int main(int argc, char *argv[])
{
    long long n, avg;
    scanf("%lld",&n);

    //trying to avoid a for loop
    if(n<2)
    {
      printf("0");
    }
    else if (n%2==0)
    {
      avg = (2 + n) / 2;
      printf("%lld",avg);
    }
    else
    {
      avg = (1 + n) / 2;
      printf("%lld,5",avg);//a lesson in trickery
    }


    return 0;
}
