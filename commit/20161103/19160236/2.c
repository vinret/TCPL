#include<stdio.h>
int main()
{
int n,a[10],b[10],c[10],i;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d %d %d",&a[i],&b[i],&c[i]);
for(i=1;i<=n;i++)
{
if(a[i]+b[i]>c[i])
printf("Case #%d:true\n",i);
else
printf("Case #%d:false\n",i);
}
return 0;
}
