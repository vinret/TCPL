#include<stdio.h>
int count1_in_bin(int n);

int count1_in_bin(int n)
{
int x[100],i=0,k=0;
do
{
x[i]=n%2;
n/=2;
i++;
}while(n!=0);
for(;i>=0;i--)
{
if(x[i]==1) k+=1;
}
return k;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",count1_in_bin(n));
return 0;
}

