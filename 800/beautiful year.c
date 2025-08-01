#include<stdio.h>
int main()
{
    int n,a[6],r[6],k=0;
    scanf("%d",&n);
    beautiful year:
    n++;
    for(i=0;i<4;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(j=0;a[j]='\0';j++)
    {
        flag =0;
        for(i=0;i<k;i++)
        {
            if(a[i]==a[j])
                goto beautiful year;
        }
        if(!flag)
            r[k++]=a[j];
    }

    return 0;
}
