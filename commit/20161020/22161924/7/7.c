#include <stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d",&x);
    a=x/100;
    b=(x-100*a)/10;
    c=x%10;
    if (a!=0,b!=0,c!=0) printf("%d%d%d\n",c,b,a);
    return 0;
}
