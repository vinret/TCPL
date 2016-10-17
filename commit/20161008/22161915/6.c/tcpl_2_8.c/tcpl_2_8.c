#include <stdio.h>
unsigned rightrot(unsigned x,int n);
int wordlength(void);
main()
{
    unsigned x;
    int n;
    x=111;
    n=3;
    rightrot(x,n);
}
unsigned rightrot(unsigned x,int n)
{
    int wordlength(void);
    int wl;
    wl=wordlength();
    printf("wl:%d",wl);
    x=(x&~(~0<<n%wl))<<(wl-n%wl);
    return x;
}
int wordlength(void)
{
    int i;
    unsigned v=(unsigned)~0;
    for(i=1;(v=v>>1)>0;i++);
    return i;
}
