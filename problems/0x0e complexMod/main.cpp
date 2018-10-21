#include <iostream>

//B mod 2^A.
int main()
{
    long long a, b, x=1;
    scanf("%lld%lld",&a,&b);
    
    while(a>0){
      x*=2;
      a--;
    }
    b=b%x;
    printf("%lld",b);



    return 0;
}
