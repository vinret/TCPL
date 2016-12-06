#include<stdio.h>
int main()
{
int n,b,c,i,j;
scanf("%d%d",&n,&b);
int a[n];
for (i=0;i<n;i++)
 scanf("%d",&a[i]);
for (i=0;i<b;i++)
 {c=a[n-1];
  for (j=n-1;j>0;j--)
   a[j]=a[j-1];
a[0]=c;}
for (i=0;i<n;i++)
 printf("%d ",a[i]);
printf("\n");
return 0;
}
