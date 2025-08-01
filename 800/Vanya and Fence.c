#include<stdio.h>
int main()
{
    int n,h,i,a[10000],k=0;;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            k=k+2;
        else
            k++;

    }
    printf("%d",k);




    return 0;
}
