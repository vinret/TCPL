#include<stdio.h>
int main()
{
int x,i,j;
int a[32];
scanf("%d",&x);
i=1;
j=x;
while(x/2!=0)
{
a[i]=x%2;
x=x/2;
i=i+1;
}
a[i]=1;
int n=i;
for(i=n;i>=1;i--)
printf("%d",a[i]);
printf(" %o",j);
printf(" %x\n",j);
return 0;
}
