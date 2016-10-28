#include<stdio.h>

int main()
{
int n,i;
scanf("%d",&n);
for(i=2;i<=(n+1)/2;i++)
if(n%i==0)
break;
if(i<n/2)
printf("%d is not a prime number\n",n);
else
printf("%d is a prime number\n",n);
return 0;
}
