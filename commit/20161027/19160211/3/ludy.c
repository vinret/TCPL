#include<stdio.h>
int main()
{
   int n,i=0;
   printf("输入一不大于1000的正整数n\n");
   scanf("%d",&n);
   if(n>1000||n<=0)
  { printf("次数未在定义域内\n");
   return 1;}
   for(i=0;n!=1;i++)
    { if(n%2==0) n/=2;
      else n=(3*n+1)/2;};
   printf("步数为%d\n",i);
   return 0;
}  
