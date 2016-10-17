#include<stdio.h>
int main()
{
    unsigned x,a,b;
    int n;

    scanf("%o%d",&x,&n);
  
    a=x<<(32-n);
    b=x>>n;
    x=a|b;
    printf("%o",x);

    return 0;
}
