#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,k,flag;
     char s[105],t[105];
     scanf("%s",s);
     scanf("%s",t);
     i=strlen(s);
     k=strlen(t);
     if(k!=i)printf("NO");
     else
    {
     flag=0;
     k=k-1;
     for(j=0;j<i;j++)
     {
         if(t[k--]!=s[j])
         {
            flag=1;
            break;
         }
     }
     if(!flag)printf("YES");
     else printf("NO");
    }






    return 0;
}
