#include <stdio.h>
int main()
{
  unsigned short a,b;
  scanf("%d%d",&a,&b);
  a=a^ b;
  b=b^ a;
  a=a^ b;
  printf("%d%d\n",a,b);
  return 0;
}
  
