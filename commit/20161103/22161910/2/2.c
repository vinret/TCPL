#include<stdio.h>
int main()
{
   int i,j;
   printf("请输入j的值：");
   scanf("%d",&j);
   for(i=1;i<=j;i++)
  {
   long long A,B,C;
   printf("请输入三个数：");
   scanf("%lld%lld%lld",&A,&B,&C);
   if(A+B>C)
   printf("Case#%d:true\n",i);
  else
  printf("Case#%d:false\n",i);
  }
  return 0;
}
