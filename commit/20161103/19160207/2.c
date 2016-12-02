#include<stdio.h>
int main(void)
{
   int t,i=1;
   long a,b,c;
   scanf("%d",&t);
   while(t>0)
   {
     t--;
     scanf("%ld%ld%ld",&a,&b,&c);
     if((a+b)>c)
       printf("Case #%d: ture",i++);
     else
       printf("Case #%d: false",i++);
   }
   return 0;
}

