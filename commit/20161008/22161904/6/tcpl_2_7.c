#include<stdio.h>
int main()
{
    unsigned x,a;
    int p,n;

    scanf("%o%d%d",&x,&p,&n);
    
    a=~(~0<<n)<<p;
    x=x^a;
    printf("%o",x);

    return 0;
}
    
