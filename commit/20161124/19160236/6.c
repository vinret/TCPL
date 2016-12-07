#include<stdio.h>
int count_in_bin(int n)
{
int i=0;
while(n!=0)
{
if((n%2)==1) i++;
n/=2;
}
return i;
}

int main()
{
int n,k;
scanf("%d",&n);
k=count_in_bin(n);
printf("%d\n",k);
return 0;
}
