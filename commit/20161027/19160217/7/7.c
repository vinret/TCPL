#include<stdio.h>
int main()
{
   long int a,b,c,ans=1;
   scanf("%ld%ld%ld",&a,&b,&c);
 a=a%c;
 while(b)
     {
         if(b&1)
             ans=(ans*a)%c;
             b=b/2;
             a=a*a%c;
     }
 printf("%ld",ans);
 return 0;
}
