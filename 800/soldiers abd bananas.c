#include<stdio.h>
int main()
{

    long long k,w,n,cost=0;
    scanf("%lld %lld %lld",&k,&n,&w);
    for(int i=0;i<=w;i++)
    {
        cost=cost+k*i;
    }
    long long x= cost-n;
    if(x<=0)
    printf("0");
    else
    printf("%d",x);
    return 0;
}
