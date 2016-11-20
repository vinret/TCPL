#include<stdio.h>
int main(void)
{
   int n,i,tmp;
//   printf("请输入(3n+1)猜想的一个数(n<=1000):  ");
   scanf("%d",&n);
   for(i=0;n!=1;i++)
   {
     tmp=n%2; 
     if(tmp==0)
       n=n/2;
     else 
       n=(3*n+1)/2;
   }
   printf("%d\n",i);
   return 0;
}  
