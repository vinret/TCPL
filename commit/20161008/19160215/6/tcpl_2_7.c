#include<stdio.h>
int main()
{
    unsigned x,p,n;

    printf("Please input x,p,n:\n");
    scanf("%u%u%u",&x,&p,&n);

    x=x^ (~(~0<<n)<<p);

    printf("invert(x,p,n)=%u\n",x);

    return 0;
}
