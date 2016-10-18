#include<stdio.h>
int main()
{
   unsigned x,y,a,b;
   int p,n;
   printf("Please input x,y,p,n:\n");
   scanf("%u%u%d%d",&x,&y,&p,&n);
   
   a=x & ((~0<<(p+1)) | (~(~0<<(p+1-n))));
   b=(y & ~(~0<<n)) <<(p+1 -n);
   x=a|b;
   printf("setbits(x,p,n,y)=%u\n",x);
   
   return 0;
}

