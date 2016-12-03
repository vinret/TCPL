#include<stdio.h>

int is_pow2(int n)
{
if(n>=1)
{
while(n%2==0)
n=n>>1;

if(n==1)
return 0;
else return -1;
}

else return -1;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_pow2(n));
return 0;
}
