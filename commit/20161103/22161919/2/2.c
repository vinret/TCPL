#include<stdio.h>
int main()
{
    int n,i;
    long long a,b,c;

    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case #%d: %s\n",i,a+b>c?"true":"false");
    }

    return 0;
}
