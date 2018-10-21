#include <iostream>


//divide n by 2 until it becomes 1, disregard the fraction part every time
//multiple m by 2 the same amount of times as n was divided by 2
// find sum of all m's that were gotten when n was odd
/*example
n  |  m
69 | 26 <<
34 | 52
17 | 104 <<
8  | 208
4  | 512
2  | 832
1  | 1664 <<
26 + 104 + 1664 = 1794
*/
int main(int argc, char *argv[])
{
    long long n, m, sum=0;

    scanf("%lld%lld",&n,&m);
    while (n>0){
        if (n%2==1)
          sum+=m;
        n=n/2;
        m=m*2;
    }

    printf("%lld\n",sum );

    return 0;
}
