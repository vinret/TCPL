#include<stdio.h>
int main(void)
{
   int n,i=2;
   printf("请输入n(n>3): ");
   scanf("%d",&n);
   while(n%i!=0)
   {
     i++;
   }
   if(i==n)
     printf("%d是素数.\n",n);
   else
     printf("%d不是素数.\n",n);
   
   return 0;
}

