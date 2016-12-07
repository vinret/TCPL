//实现冒泡排序。 
#include<stdio.h>
int main()
{
   int i,j,temp;
   int a[1000];
   int n;

   printf("请输入您即将输入数据的个数：");
   scanf("%d",&n);
   printf("请输入排序前的数据：");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

   for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
     if(a[j]>a[j+1])
     {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
     }

    printf("排序后的数据为：");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);

    printf("\n");

    return 0;
}

