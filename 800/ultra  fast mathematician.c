#include<stdio.h>
int main()
{
   char a1[105],a2[105],r[105];
   int i;
   scanf("%s %s",a1,a2);
   for(i=0;a1[i]!='\0';i++)
   {
       if(a1[i]!=a2[i])
       r[i]='1';
       else
        r[i]='0';

   }
   r[i]='\0';
   printf("%s ",r);
    return 0;
}
