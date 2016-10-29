#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%100;
    c=b%10;
    d=b/10;
    e=a/100;
    printf("%d\n",c*100+d*10+e);
    return 0;
}
