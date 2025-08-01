#include<stdio.h>
int main()
{
    int t,i;
    long long a,b,j=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%lld %lld",&a,&b);
       if(a%b==0)
        j=0;
       else
        j=b-(a%b);
        printf("%lld\n",j);
    }


return 0;

}
