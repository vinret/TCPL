#include<stdio.h>
int fac(int);
int fac(int n)
{
if(n==0)
return 1;
else return n*fac(n-1);
}
int main()
{
int i,j,n,k;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
k=fac(i);
for(j=i;j>=0;j--)
{
k/=fac(j);
k/=fac(i-j);
printf("%d\t",k);
k*=fac(j);
k*=fac(i-j);
}printf("\n");
}


return 0;
}

