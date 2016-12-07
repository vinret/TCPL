#include <stdio.h>
int a[100],n;
void swap(int *a,int *b)
{
if (*a==*b) return;
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
return;
}
int main()
{
int i,j;
scanf("%d",&n);
for (i=1;i<=n;++i)
scanf("%d",&a[i]);
for (i=n;i>=1;--i)
for (j=1;j<=i-1;++j)
if (a[j]>a[j+1]) {
a[j]=a[j]^a[j+1];
a[j+1]=a[j]^a[j+1];
a[j]=a[j]^a[j+1];
}
for (i=1;i<=n-1;++i)
printf("%d ",a[i]);
printf("%d\n",a[n]);
return 0;
}
