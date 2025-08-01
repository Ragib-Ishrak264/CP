#include<stdio.h>
int main()
{
    long long n,k,x;
    scanf("%lld %lld",&n,&k);
    for(;;)
    {
        x=(n%10==0)?n/10:n--;
        (k==0)?break;:k--;
    }

    printf("%lld",x);
  return 0;
}
