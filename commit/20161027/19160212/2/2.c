#include<stdio.h>
int main()
{
int n,i;
printf("Please input n(n>3):");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
if(n%i==0) break;
if(i<n)
printf("%dno\n",n);
else
printf("%dyes\n",n);
return 0;
}

