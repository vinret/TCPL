#include<stdio.h>
void input(int a[],int n)
{
int i;
for (i=0;i<n;i++)
scanf("%d",&a[i]);
}
void output(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void sort(int a[],int n)
{
int i,j,temp;
for(j=0;j<n-1;j++)
for(j=0;j<n-1-i;j++)
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
int main()
{
int a;
int b[a];
scanf("%d",&a);
input(b,a);
sort(b,a);
output(b,a);
return 0;
}
