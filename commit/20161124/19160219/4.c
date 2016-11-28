#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
   int i=0,j,flag=0;
   int a[100];
   while(n!=0)
   {   
      a[i]=n%10;
      n/=10;
      i++;
   }
   for(j=0,i--;j<i;i--,j++)
      if(a[i]!=a[j])
      {
         flag=-1;
         break;
      }
   return flag;
}
int main()
{
   int n,i;
   int a[100];
   scanf("%d",&n);
   i=n;
   if(is_int_pal(n)+1)
      printf("%d is a palindrome\n",i);
   else
      printf("%d is not a palindrome\n",i);
   return 0;
}
