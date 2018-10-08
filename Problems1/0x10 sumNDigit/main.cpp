#include <iostream>

using namespace std;
//sum all n-digit numbers
int main()
{
    long long n, a=1 sum=0;
    scanf("%lld",&n);

    for (int i=1; i<n; i++)
        a*=10;


    for (int i=a; i<a*10; i++)
        sum+=i;

    printf("%lld",sum);
    

    return 0;
}
