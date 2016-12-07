#include<stdio.h>
int is_int_pal(int n)
{
   int temp,sum=0;
   temp=n;
   while(temp)
  {
    sum=sum*10+n%10;
    temp/=10;
   }
  if(temp!=sum)
  return -1;
  else
  return 0;
}
int main()
{
  int n;
  printf("input n:\n");
  scanf("%d",&n);
  if(is_int_pal(n))
  printf("%d是回文数.\n",n);
  else
  printf("%d不是回文数.\n",n);
  return 0;
}
