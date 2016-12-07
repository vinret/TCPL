#include<stdio.h>
int main()
{
 int n,m,i,a[100];
 scanf("%d%d",&n,&m);
 m=m%n;
 for(i=0;i<=n-1;++i)
   scanf("%d",&a[i]);
 for(i=n-m;i<=2*n-m-2;++i)
   printf("%d ",a[i%n]);
 printf("%d\n",a[(2*n-m-1)%n]);
 
 return 0;
}

