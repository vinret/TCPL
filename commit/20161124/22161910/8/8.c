#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
   int i;
   for(i=2;i<=sqrt(n);i++)
   if(n%i==0)
   return 0;
   return 1;
}
int primes(int n)
{
   int i=1,count=0;
   while(count!=n)
{
   i++;
if(is_prime(i))
   count++;
}
return i;
}
int main()
{
   int m,n,j,count=1;
   printf("input m n:\n");
   scanf("%d%d",&m,&n);
   for(j=m;j<=n;j++)
   {
      printf("%d",primes(j));
      if(count<10&&j!=n);
        printf(" ");
       count++;
   }
 return 0;
}

