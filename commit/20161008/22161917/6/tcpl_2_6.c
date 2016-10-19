#include<stdio.h>
int main()
{
    unsigned int x,y;
    unsigned int a,b;         
    int p,n;
    scanf("%u%u%d%d",&x,&y,&p,&n);
    a=~(~0<<n)<<(p-n+1);   //n bits become 1,and the rest is 0.
    x=x&~a;                //n bits become 0,and the rest remains unchanged.
    b=~(~0<<n)<<(p-n+1);    
    y=y&b;                 //n bits remain unchanged,and the rest becomes 0.
    x=x|y;
    printf("%u",x);
   
    return 0;
}
