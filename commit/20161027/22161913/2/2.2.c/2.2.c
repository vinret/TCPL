#include<stdio.h>
int main()
{
   int i,j;
   printf("请输入j(j>3): ");
   scanf("%d",&j);
   for(i=2;i<j;i++)
   {
      if(j%i==0)
      break;
   }
   if(i==j)
    printf("%d是素数\n",j);
   else
    printf("%d不是素数\n",j);
   return 0;
}

