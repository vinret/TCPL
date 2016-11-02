#include<stdio.h>
int main()
{
    long int a,b;
    int c,d;
    scanf("%d%d%d",&a,&b,&c);
    d =pow(a,b);
    printf("%d",d%c);
    return 0;
}
    
