#include <stdio.h>
int main()
{
 int n,m,i,a[100];
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=(n-m);i<n;i++)
  printf("%d ",a[i]);
 for(i=0;i<(n-m);i++)
 {
  if(i==(n-m-1))
   printf("%d",a[i]);
  else
   printf("%d ",a[i]);
 }
 printf("\n");
 return 0;
}
