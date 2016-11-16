#include<stdio.h>
int main() 
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fac_bit_count(n));
  return 0;
}
  

  int fac_bit_count(int n)
{
 long result=1;
 while(n>1)
{
  result=result*n;
  --n;
}
  
int i=0;
while(result)
{
  ++i;
  result=result/10;
}
 return i;
}

 
