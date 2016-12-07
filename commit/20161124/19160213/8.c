#include<stdio.h>
#include<stdio.h>

int is_prime(int x)
{
int b=1,i;
for(i=2;i<=sqrt(x);i++)
{
if(x%i==0)
{
b=0;
break;
}
}
return b;
}

int main()
{
int a[10001],m,n,i=1,j=1,k=0,count=1;
scanf("%d %d",&m,&n);

while(k<n)
{
i++;
if(is_prime(i)==1)
{
a[j]=i;
j++;
k++;
}
}
for(i=m;i<n+1;i++)
{
printf("%d",a[i]);
k++;
if(count%10==0)
{
printf("\n",a[i]);
count++;
}
else if(count!=n-m+1)
{
printf(" ");
count++;
}
}
return 0;
}
