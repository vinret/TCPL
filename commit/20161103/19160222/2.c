#include<stdio.h>
int main()
{
int T,a[10],b[10],c[10],i;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d%d%d",&a[i],&b[i],&c[i]);
}
for(i=1;i<=T;i++)
{
if(a[i]+b[i]<=c[i])
printf("Case #%d: false\n",i);
else printf("Case #%d: true\n",i);
}
return 0;
}
