#include<stdio.h>
int main()
{
    long int a,b,c,p=1,i;
    scanf("%ld%ld%ld",&a,&b,&c);
    a%=c;
    for(i=1;i<=b;i++)
       p=p*a;
    p%=c;   
    printf("%ld\n",p);
    return 0;
}
