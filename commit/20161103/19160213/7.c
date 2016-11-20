#include<stdio.h>

int is_prime(int n)
{
int i;
for (i=2;i<=n/2;i++)
if(n%i==0)
{
return 0;
}
return 1;
}

int main()
{
int j;
for(j=100;j<=1000;j++)
if (is_prime(j)==1)
printf("%d\t",j);
printf("\n");
return 0; 
}
