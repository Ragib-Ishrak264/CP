#include<stdio.h>
int main()
{
    int n,aa=0,dd=0,i;
    char result[1000000];
    scanf("%d",&n);
    scanf("%s", result);
    for(i=0;result[i]!='\0';i++)
    {
        if(result[i]=='A')
            aa++;
        else if(result[i]=='D')
            dd++;
    }
    if(aa>dd)printf("Anton\n");
    else if(dd>aa)printf("Danik\n");
    else printf("Friendship");


    return 0;
}
