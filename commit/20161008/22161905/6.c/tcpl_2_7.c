#include<stdio.h>
unsigned invert(unsigned x,int p,int n);

main()
{
    unsigned int x;
    int p,n;
    printf("x=");
    scanf("%u",&x);
    printf("p=");
    scanf("%d",&p);
    printf("n=");
    scanf("%d",&n);
 
     x=x^(~(~0<<n)<<(p+1-n));
    printf("%u\n",x);
    return 0;
}
