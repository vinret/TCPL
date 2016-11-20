#include<stdio.h>
int is_prime(int n);
int main()
{
int n,i,k=1;
for(n=3;k<100;n++)
{
i=is_prime(n);
if(i) k++;
}
for(n=n;k<1000;n++)
{
i=is_prime(n);
if(i) {printf("%d ",n);k++;}
}
printf("\n");
return 0;
}

int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
if(n%i==0) break;
if(i<n) return 0;
else return i;
}

