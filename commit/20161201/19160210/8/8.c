#include<stdio.h>
int main()
{
int n;
printf("请输入这组数的长度\n");
scanf("%d",&n);
int a[n],i,j,temp;
printf("请输入这组数\n");
for (i=0;i<n;i++)
 scanf("%d",&a[i]);

for (i=n-1;i>0;i--)
 for (j=0;j<=i-1;j++)
  if(a[j]>a[j+1])
   {temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;}

for (i=0;i<n;i++)
  printf ("%d ",a[i]);
printf("\n");
return 0;
}
