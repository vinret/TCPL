#include<stdio.h>
unsigned setbits(unsigned x,unsigned y,int n,int p);
unsigned setbits(unsigned x,unsigned y,int n,int p)
{
    return x&~(~(~0<<n) << (p+1-n)) | (y&~(~0<<n))<<(p+1-n);
}

int main()
{
    unsigned x,y;
    int n,p,r;
    printf("x,y,n,p=");
    scanf("%u,%u,%d,%d",&x,y,n,p);
    r=setbits(x,p,n,y);
    printf("r=setbits(x,p,n,y)=%d\n",r);
    return 0;
}
