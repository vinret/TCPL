#include<stdio.h>
int fac_bit_count(int n);

int main()
{
int n;
 scanf("%d",&n);
 printf("%d\n",fac_bit_count(n));
return 0;
}

int fac_bit_count(int n)
{
int i;
unsigned long long m=1;
for (n=n;n>0;n--)
 m=m*n;
for (i=0;m!=0;i++)
 m=m/10;
return i;
}
