#include<stdio.h>
int count1_in_bin(int n)
{
int a[100],i,b=0;
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;}
for(i=i-1;i>=0;i--)
{
if(a[i]==1)
b+=1;}
return b;
}

int main()
{  int n;
scanf("%d",&n);
printf("the number of 1 is:%d\n",count1_in_bin(n));
return 0;
}
