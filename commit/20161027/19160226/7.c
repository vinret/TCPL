#include<stdio.h>
int main()
{
    long int a,b,i;
    int c,d,m=1;
    scanf("%ld,%ld,%d", &a,&b,&c);

    i=a;

    while (m<b)
    {
    a*=i;
    m++;
    }

    d=a%c;
    printf("%d\n",d);
    return 0;
}
