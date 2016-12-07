#include <stdio.h>
int main()
{
   int n,m,i,j,r;
   scanf("%d %d",&n,&m);
   i=n+m;
   int a[i];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=1;i<=n;i++)
   a[n-i+m]=a[n-i];
   for(i=1;i<=m;i++)
   a[m-i]=a[n+m-i];
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
   printf("\n");
   return 0;
}
