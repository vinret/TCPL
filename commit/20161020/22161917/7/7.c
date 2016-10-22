#include<stdio.h>
int main()
{
    int a,b,c;
    int     x;
    scanf("%d",&x);
    a=x/100;
    b=(x-a*100)/10;
    c=x%10;
    printf("%d%d%d\n",c,b,a);
  
    return 0;
}
