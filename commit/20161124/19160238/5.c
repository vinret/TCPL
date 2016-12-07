#include<stdio.h>
int is_pow2(int n)
{
  if(n>=1)
    {
      while(!(n%2)) 
      n>>=1;
      if(n==1) return 0;
      else return -1;
    }
  else return -1;
}

int main()
{
  int integer;
  printf("input an integer:  ");
  scanf("%d",&integer);
  printf("%d",is_pow2(integer));
  return 0;
}
