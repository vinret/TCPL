#include<stdio.h>
#include<math.h>
int main()
{
int k,n,i,x=0;
int M,N;
int a[1000];
scanf("%d,%d", &M,&N);
for (n=2;n<=10000;n++)
{
k=(int)sqrt(n);
for (i=2;i<=k;i++,x++)
{ if (n%i==0)
   break;
  else a[x]=n;
}}

for (x=0;x<=N-M;x++)
 printf("%d", a[x]);
return 0;
}
