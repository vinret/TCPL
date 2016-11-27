#include<stdio.h>

int is_pow2(int n);

int main()

{

         int n;

         scanf("%d",&n);

         printf("%d的二进制中1的个数是%d\n",n,is_pow2(n));

         return 0;

}

int is_pow2(int n)

{

         int a[50],i=0,count=0;

         do

         {

                  a[i]=n%2;

                  n=n/2;

                  i++;

         }while(n!=0);

         for(i=i-1;i>=0;i--)

                  if(a[i]==1)

                          count++;

         return count;

}
