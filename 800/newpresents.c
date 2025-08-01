#include<stdio.h>
int main()
{
    int n,i,j,a[105],sum=0;
    float prct;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    prct=(((1.00*sum)/100.00)/n)*100.00;

    printf("%f",prct);
    return 0;
}

