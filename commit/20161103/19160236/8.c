#include<stdio.h>
int fac_bit_count(int n);
int main()
{
int n,i;
scanf("%d",&n);
i=fac_bit_count(n);
printf("%d\n",i);
return 0;
}


int fac_bit_count(int n)
{
int sum=1,i;
for(n+1;n!=1;n--)
sum*=n;
for(i=1;sum/10!=0;i++)
{
sum/=10;
}
return i;
}
