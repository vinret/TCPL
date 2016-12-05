#include<stdio.h>

int main()
{
int a[100],n,m,i,j,temp,flag=0;
scanf("%d %d",&n,&m);

for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<m;i++)
{
temp=a[n-1];
for(j=n-1;j>0;j--)
a[j]=a[j-1];
a[j]=temp;
}

for(i=0;i<n;i++)
{
if(flag!=0)
printf(" ");
printf("%d",a[i]);
flag=1;
}

printf("\n");
return 0;
}


