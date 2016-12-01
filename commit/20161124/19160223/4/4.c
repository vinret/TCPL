#include<stdio.h>

int is_int_pal(int n);

int main()

{

         long int n;

         scanf("%ld",&n);

         if(is_int_pal(n)==-1)

                  printf("%ld is not a palindrome number.\n",n);

         else

                  printf("%ld is a Palindrome number.\n",n);

         return 0;

}

int is_int_pal(int n)

{

         int flag,i,k=0,a[50],m;

         do

         {

                  a[k]=n%10;

                  n=n/10;

                  k++;

         }while(n>0);

         for(i=0,k=k-1;k>i;i++,k--)

                  if(a[i]!=a[k])

                  {

                          flag=-1;

                          break;

                  }

         return flag;

}
