#include<stdio.h>
int count1_in_bin(int n);
int main()
{
   int n;
   printf("please input a number:\n");
   scanf("%d\n",&n);
   printf("%d\n",count1_in_bin(n));
   return 0;
   
}
int count1_in_bin(int n)
{
   int count=0;
   while(n)
 {
   ++count;
   n=(n-1)&n;
 }
   return count;
}


