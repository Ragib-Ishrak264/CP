#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int flag =0;
    for(;;)
    {
        a=a*3;
        b=b*2;
        flag++;
        if(a>b)
            break;
    }
    printf("%d",flag);
    return 0;
}
