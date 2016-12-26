#include<stdio.h>
int is_int_pal(int n)
{
int num[10000],i=0,count=0,a,b;
 do{
  num[i]=n%10;
  n/=10;
  i++;
}
while(n>0);
   a=i/2;
   i--;
 for(b=0;b<a;b++)
{
      if(num[b]==num[i-b])
               count++;
}
  if(count==a)
return 0;
  else
return -1;
}

int main()
{
int n;
  scanf("%d",&n);
  printf("%d\n",is_int_pal(n));
return 0;
}
