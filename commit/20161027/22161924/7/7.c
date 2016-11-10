#include <stdio.h>
int main()
{
    long int a,b;
    int c,i;
    scanf("%ld %ld %d",&a,&b,&c);
    for(i=1;i<=b;i++)
       a*=a;
       printf("%ld\n",a%c);
    return 0;
}
