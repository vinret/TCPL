#include<stdio.h>
int main()
{
    long long a,b,c;
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
{
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a>b>c) 
    printf("Case #%d: true\n",i);
    else
    printf("Case #%d: false\n",i);
 }
    return 0;
}  
