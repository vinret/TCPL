#include<stdio.h>
int main()
{
  int a[10],i,j,temp;
  printf("请输入十个数:");
  for(i=0;i<10;i++)scanf("%d",&a[i]);


  for(i=0;i<10;i++)
    for(j=0;j<10-i;j++)
         if(a[j]>a[j+1]){
            temp=a[j+1];a[j+1]=a[j];a[j]=temp;
          }
  printf("从小到大排列:");
  for(i=0;i<10;i++)printf("%d ",a[i]);
  printf("\n");
  return 0;
}
          
