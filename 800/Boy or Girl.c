#include<stdio.h>
int main()
{
    char name[105],result[105];
    int i,j,k=0,found;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        found = 0;
        for(j=0;j<k;j++)
        {

            if(result[j]==name[i])
               found=1;
        }
        if(!found)
        {
            result[k++]=name[i];
        }

    }
    result[k]='\0';

    if(k%2==1)printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");





    return 0;
}
