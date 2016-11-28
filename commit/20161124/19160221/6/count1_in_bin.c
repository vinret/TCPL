#include <stdio.h>
int count1_in_bin(int n)
{
  int count=0,i;
  if(n)
    { for(i=0;i<32;++i)
      { if((n&1)==1) ++count;
        n=n>>1; }
    }
  return count;
}

int main()
{ int integer;
  printf("input an integer: ");
  scanf("%d",&integer);
  printf("%d",count1_in_bin(integer));
  return 0;
}
