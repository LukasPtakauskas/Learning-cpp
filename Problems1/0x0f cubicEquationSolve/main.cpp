#include <iostream>

//bruteforcing cibic equations. a*x^3 + b * x^2 + c*x + d =0
int main(int argc,char *argv[])
{
    int a, b, c, d, M[10], k=0;
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    //this is my bruteforce part
    for (int i=-1000; i<=1000; i++)
    {
        if (a*i*i*i+b*i*i+c*i+d==0)
        {
          M[k]=i;
          k++;
        }
    }

    for (int i=0; i<k; i++){
        if ((i+1)<k)
          printf("%d_",M[i]);
        else
          printf("%d",M[i]);

    }

    return 0;
}
