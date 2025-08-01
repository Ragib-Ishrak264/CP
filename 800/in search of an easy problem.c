#include<stdio.h>
int main()
{
    int n,i,flag=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            flag=1;
            break;
        }
    }
    if(!flag)printf("EASY");
    else printf("HARD");

}
