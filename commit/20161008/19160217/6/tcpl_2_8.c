#include<stdio.h>
int main()
{
    unsigned short x,b,c;
    short int n;

    printf("x=");
    scanf("%o",&x);
    printf("n=");
    scanf("%d",&n);

    b=x<<(16-n);
    c=x>>n;
    c=c|b;
    printf("%o\n",c);

    return 0;
}
