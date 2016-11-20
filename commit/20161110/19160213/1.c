#include<stdio.h>
int main()
{
long  i,j,m,n;
printf("da yin hang shu:\n");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
m=1;
for(j=1;j<i;j++)
{
printf(" %ld",m);
m=m*(i-j)/j;
}
printf(" 1\n");
}
return 0;
}
