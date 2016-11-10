#include <stdio.h>
int main()
{
int i,n;
printf("please put a number n(n<1000):\n");
scanf("%d",&n);
if (n==0)
return 0;
for(i=0;n!=1;i++)
if (n%2==0)
n=n/2;
else 
n=(3*n+1)/2;
printf("%d\n",i);
return 0;
}
