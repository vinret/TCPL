#include<stdio.h>
int main()
{
int n,step=0;
printf("Please input n(n<=1000):");
scanf("%d",&n);
while(n!=1)
{n=(n%2)?(3*n+1)/2:(n/2);step++;}
printf("step=%d",step);
return 0;
}

