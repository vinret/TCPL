#include<stdio.h>
int main()
{
int n,i,k,x[10];
scanf("%d",&n);
printf("%o,%x\n",n,n);

for(i=0;n!=0;i++)
{
x[i]=n%2;
n=n/2;
}
for(k=i-1;k!=(-1);k--)
printf("%d",x[k]);
printf("\n");
return 0;
}

