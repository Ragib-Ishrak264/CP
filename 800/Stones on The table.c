#include<stdio.h>
int main()
{
    int n,j;
    char s[50];
    scanf("%d",&n);
    for( j=0;j<n;j++)
    {
        scanf(" %c",&s[j]);
    }
    s[n]='\0';
    int flag=0;
    for(int i=0;s[i]!='\0';i++)
    {
       if(s[i]==s[i+1])
       {
           flag++;
       }

    }

printf("%d",flag);

    return 0;
}
