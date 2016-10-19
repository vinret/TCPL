#include<stdio.h>
int main()
{
    unsigned x,n;
    unsigned a,b,c;

    printf("Please input x,n\n");
    scanf("%u%u",&x,&n);

    b=x<<(32-n);
    c=x>>n;
    a=b|c;
    
    printf("rightrot=%u\n",a);

    return 0;
}
