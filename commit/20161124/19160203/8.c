#include<stdio.h>
int prime(int n)
{
   int i;
   for(i=2;i<=n-1;i++)
      if(n%i==0)
         break;
   if(i<n)
      return 1;
   else
      return 0;
}
int main()
{
   int m,n,k=2,a=0,b=0;
   scanf("%d%d",&m,&n);
   while(a<n)
   {
      if(prime(k)==0)
      {
         a++;
         if(a>=m)
         {
            b++;
            if(b%10==0)
            {
               printf("%d\n",k);
               b=0;
            }
            else
            {
               if(a==n)
                  printf("%d",k);
               else
                  printf("%d ",k);
            }
         }
      }
      k++;
   }
   return 0;
}
