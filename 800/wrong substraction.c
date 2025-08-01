#include<stdio.h>
int main()
{
    long long n;
    int k,i;
    scanf("%lld %d",&n,&k);
    for(i=0;i<k;i++)
    {
        if(n%10!=0)
            n-=1;
        else
            n=n/10;
    }
    printf("%lld\n",n);
}
