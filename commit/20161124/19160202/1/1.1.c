#include<stdio.h>
int GCD_recursive(int m,int n)
{
if (!m) return n;
else return GCD_recursive(n%m,m);
}
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("%d\n",GCD_recursive(m,n));
return 0;
}
