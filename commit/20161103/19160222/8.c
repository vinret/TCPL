#include<stdio.h>
int fac_bit_count(int n);
int main()
{
int n,k=0;
scanf("%d",&n);
k=fac_bit_count(n);
printf("%d\n",k);
return 0;
}

int fac_bit_count(int n)
{
int i,sum=1,k=0;
for(i=1;i<=n;i++)
{
sum*=i;
}
while(sum!=0)
{
sum/=10;
k++;
}
return k;
}
