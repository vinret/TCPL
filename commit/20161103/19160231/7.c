#include<stdio.h>
int is_prime(int n);
int main()
{
int i,n,k,j;

for(n=3;k<100;n++)
{
i= is_prime(n);
if(i) k++;}
for(n=n;k<1000;n++)
{i= is_prime(n);
if(i) printf("%d",n);}
printf("\n");
return 0;
}

int is_prime(int n)
{
int i;
for(i=2;i<n;i++)
if(n%i==0)
break;
else return i;
}

