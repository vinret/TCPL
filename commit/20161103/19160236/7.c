#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
int j,n,i=0;
for(n=2;i<=1000;n++)
{
j=is_prime(n);
if(j==0&&i<=10) i++;
if(j==0&&i>10)
{i++;
printf("%d ",n);}
}

printf("\n");
return 0;
}
int is_prime(int n)
{
int k;
for(k=2;k*k<=n;k++)
{
if(n%k==0) return -1;
}
return 0;
}
