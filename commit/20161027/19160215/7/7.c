#include<stdio.h>
int main()
{
    long long a,b,c,y=1;
    scanf("%Ld%Ld%Ld",&a,&b,&c);
    a%=c;
    while(b)
    {
     if(b&1)
       y=(y*a)%c;
       a=(a*a)%c;
       b/=2;
     }
    printf("%Ld\n",y);

    return 0;
}

