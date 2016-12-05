#include<stdio.h>
int count1_in_bin(int n);

int count1_in_bin(int n)
{
       int count=0;
       do
       {
         if(n&(n-1)==1)
         count++;
         n=n>>1;
       }
       while(n>0);
       return count;
}
int main()
{
      int n;
      scanf("%d",&n);
      if(count1_in_bin(n))
      printf("the number of 1 is: ");
      return 0;
}
      
