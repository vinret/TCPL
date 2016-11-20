#include<stdio.h>
int fac_bit_count(int n)
{
int i,j;
long long m=1;
for(i=1;i<=n;i++)
m*=i;
for(j=0;m!=0;j++)
m/=10;
return j;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fac_bit_count(n));
return 0;
}

