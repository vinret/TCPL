#include<stdio.h>
int main()
{
    unsigned int x, p,m,n;
    scanf("%u%u%u",&x,&p,&n);
    m=~(~0<<n)<<(p-1);
    x=x^m;
    printf("%u",x);
    return 0;
}
~                                                                               
~                                                                               
~                                                                               
~                     
