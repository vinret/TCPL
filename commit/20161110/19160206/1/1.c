#include<stdio.h>
int a(int);
int a(int n)
{
  if(n==0)
    return 1;
  else
    return n*a(n-1);
}
int main()
{
int i,j,n,k;
  scanf("%d",&n);
  for (i=0;i<=n;i++)
{
   k=a(i);
  for (j=i;j>=0;j--)
{
   k/=a(j);
   k/=a(i-j);
   printf("%d\t",k);
   k*=a(j);
   k*=a(i-j);
}
printf("\n");
}
return 0;
}
