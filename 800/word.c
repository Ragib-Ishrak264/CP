#include<stdio.h>
int main()
{
    int small=0,capital=0,i;
    char a[105];
    scanf("%s", a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]>=65 && a[i]<=90)capital++;
       else if(a[i]>=97 && a[i]<=122)small++;
    }
    if(small>=capital)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;

            }

        }
        printf("%s ",a);
    }
    else
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>=97&&a[i]<=122)
            {
                a[i]=a[i]-32;
            }
        }
        printf("%s ",a);
    }




    return 0;
}
