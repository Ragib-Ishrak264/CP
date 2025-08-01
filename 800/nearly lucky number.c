#include<stdio.h>
int main()
{
   unsigned long long n,count=0;
   int t;
   scanf("%llu",&n);
   while(n)
   {
       t=n%10;
       n=n/10;
       if(t==4||t==7)count++;
   }
   if(count==4||count==7)
    printf("YES");
   else printf("NO");

 return 0;
}
