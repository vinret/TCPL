#include<stdio.h>
int main()
{
 int n,m,a[100];

 scanf("%d%d",&n,&m);
 int i;
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=n-m;i<n;i++)
   printf("%d ",a[i]);
 for(i=0;i<n-m-1;i++)
   printf("%d ",a[i]);
 printf("%d\n",a[n-m-1]);
 return 0;
}
