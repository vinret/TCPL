#include<stdio.h>
int is_pow2(int n);

int is_pow2(int n)
{
   if(n&1==1||n<=0)
   return -1;
   else
   {
     while(n>1)
     {
       if(1&n==1)
         return -1;
       else
         n=n<<1;
      }
    }
    return 0;
}
int main()
{
   int n;
   scanf("%d",&n);
   if(is_pow2(n))
     printf("This number isn't the power of 2.\n");
   else
     printf("This number is the power to the power of 2.\n");
   return 0;
} 

