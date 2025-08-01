#include<stdio.h>
int main()
{
    int i,n,a[10000],b[10000],t=0,max;
    scanf("%d",&n);
    max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        t=t-a[i]+b[i];
        if(t>max)max=t;
    }
    printf("%d",max);
    return 0;
}
