#include<stdio.h>
int main()
{
int n,i=0,a[100],temp,j;
printf("n:");
scanf("%d",&n);
printf("shu ru n ge shu:");

for(i=0;i<n;i++)
scanf("%d" ,&a[i]);

for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("pai xu hou:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
