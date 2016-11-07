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
int i=0,j=1;
for(;n>=1;n--)
j*=n;
while(j!=0)
{
j/=10;
i++;
}
return i;
}
