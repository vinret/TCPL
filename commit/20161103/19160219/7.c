#include<stdio.h>
int is_prime(int n);
int main()
{
int n,i,k=0;
for (n=541;k<=7380;n++)
{
i=is_prime(n);
if (i) printf("%d ",n);
k++;
}
printf("\n");
return 0;
}
int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
if (n%i==0) break;
if (i<n) return 0;
else return i;
}
