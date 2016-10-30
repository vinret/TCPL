#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int num[n];
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
highsort(num,n);
return 0;
}
void highsort(int a[],int n)
{
int i,j,tem;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
tem=a[j+1];
a[j+1]=a[j];
a[j]=tem;
}
}
}
printf("after changing:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
