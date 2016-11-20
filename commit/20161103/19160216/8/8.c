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
int a=1,i,b=0;
for (i=1;i<=n;i++) a*=i;
while (a!=0)
 {b++;a/=10;}
return b;
}
