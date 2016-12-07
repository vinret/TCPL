#include<stdio.h>
int main()
{
    int i,j,n;
    int a[10];
    printf("请输入10个数: ");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    printf("排序前: ");
    for(i=0;i<10;i++)
      printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<9;i++)
      for(j=0;j<9-i;j++)
      if(a[j]>a[j+1])
      {
         n=a[j];
         a[j]=a[j+1];
         a[j+1]=n;
      }
    printf("排序后: ");
    for(i=0;i<10;i++)
       printf("%d ",a[i]);
    printf("\n");
    return 0;
}
