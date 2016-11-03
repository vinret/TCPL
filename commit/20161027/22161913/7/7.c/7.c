#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b;
    int c,d;
    scanf("%ld%ld%d",&a,&b,&c);
    d=pow(a,b);
    printf("%d\n",d%c);
    return 0;
}

