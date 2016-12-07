#include<stdio.h>
int main()
{
  int n[10],i,j;
  printf("请输入10个数字:\n");
  for(i=0;i<10;i++)
  scanf("%d",&n[i]);
  for(i=0;i<9;i++)
  for(j=0;j<9-i;j++)
  if(n[j]>n[j+1])
{
   n[j]=n[j]^n[j+1];
   n[j+1]=n[j]^n[j+1];
   n[j]=n[j]^n[j+1];
 }
printf("排序后：");
for(i=0;i<10;i++)
printf("%d",n[i]);
printf("\n");
return 0;
}
