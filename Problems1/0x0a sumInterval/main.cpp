#include <iostream>

//sum the integers in interval [a,b]
int main(int argc, char *argv[])
{
    long long a, b, sum=0;
    scanf("%lld%lld",&a,&b);
    for (int i=a; i<=b; i++){
        sum+=i;
    }
    printf("%lld", sum);
    return 0;
}
