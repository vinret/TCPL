#include<stdio.h>

int count1_in_bin(int n)
{
int i,a;
for(i=0;n>0;i)
{
a=n%2;
n=n/2;
if(a!=0)
i=i+1;
else
i=i;
}

printf("%d\n",i);
}

int main()
{
int n;
scanf("%d",&n);
count1_in_bin(n);
return 0;
}
