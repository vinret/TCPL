#include<stdio.h>
int main()
{
    long long a,b,c;
    int d,i=0,ans[101];

    scanf("%lld%lld%d",&a,&b,&d);
    c=a+b;
    while(c!=0)
    {
          ans[++i]=c%d;
          c/=d;
    }
    if(i==0)
    printf("0");
    while(i)
    printf("%d",ans[i--]);
    printf("\n");
  
    return 0;
}
