#include<stdio.h>
int is_int_pal(int n);
int main()
{
   int n;
   printf("please input a number:\n"); 
   scanf("%d",&n);
   printf("%d\n",is_int_pal(n));
   return 0;
}
int is_int_pal(int n)
{
    int num[200];
    int i=0;
    while(n>0)
  {
     num[i++]=n%10;
     n/=10;
  }
     int j=0,k=i-1;
     while(num[j]==num[k]&&j<k)
     j++,k--;
     if(j>=k)
     return 0;
     else 
     return -1;
}		

