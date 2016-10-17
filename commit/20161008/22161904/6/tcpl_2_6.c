#include<stdio.h>
int main()
{
    unsigned x,y,a,b,c;
    int p,n;
    
    scanf("%o%o",&x,&y);
    scanf("%d%d",&p,&n);

    a=x<<(32-p-n)>>(32-n)<<p;
    x=x&~a;
    b=y&~(~0<<n);
    c=b<<n;
    x=x|c;
    printf("%o",x);

    return 0;
}
