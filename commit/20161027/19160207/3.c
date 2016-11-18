#include<stdio.h>
int main(void)
{
   int n,i;
   printf("请输入(3n+1)猜想的一个数(n<=1000):  ");
   scanf("%d",&n);
   for(i=1;n!=1;i++)
   {
     if(n%2==0)
       n=n/2;
     else if(n%2==1)
       n=(3*n+1)/2;
   if(n==1)
    break;
   }
   printf("需要%d步.\n",i);
   return 0;
}
     
   
