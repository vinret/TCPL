#include<stdio.h>
int GCD_iterative(int m,int n)
{
while (m)
{
int tmp=m;
m=n%m;
n=tmp;
}
return n;
}
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("%d\n",GCD_iterative(m,n));
return 0;
}

