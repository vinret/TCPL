#include<stdio.h>
unsigned setbits(unsigned x,unsigned y,int p,int n)
{
    return (x&((~0<<(p+1))|(~(~0<<(p-n+1)))))|((y&~(~0<<n))<<(p-n+1));
}
int main(void)
{
    unsigned x;
    unsigned y;
    unsigned a;
    int p;
    int n;
    for(x=0;x<30000;x+=511)
    {
       for(y=0;y<1000;y+=37)
       {
          for(p=0;p<16;p++)
          {
             for(n=1;n<=p+1;n++)
             {
                a=setbits(x,p,n,y);
                printf("setbits(%u,%d,%d,%u)=%u\n",x,p,n,y,a);
             }
          }
       }
    }
    return 0;
}

                   
