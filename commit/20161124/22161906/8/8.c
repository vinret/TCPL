//数素数
#include<stdio.h>
#include<math.h>
int is_prime(int n);
int is_prime(int n)
{
   int i,k;
   k=(int)sqrt(n);
   for(i=2;i<=k;i++)
      if(n%i==0)
         break;
   if(i>k)
       return n;
   else
       return 0;
}

int main()
{
    int M,N;
    int n;
    printf("请输入两个整数M和N：");
    for(n=M;n<=N;n++)
    printf("%d ",is_prime(n));
    return 0;
}

