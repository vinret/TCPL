#include<stdio.h>
int main()
{
int i,n,k,x[10];
scanf("%d",&n);
printf("%o\n%x\n",n,n);
for(i=0;n!=0;i++)
{
x[i]=n%2;
n=n/2;
}
for(k=i-1;k!=(-1);k--)
printf("%d",x[k]);
} 
