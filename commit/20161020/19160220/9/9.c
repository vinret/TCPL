#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  a=a^ b;
  b=b^ a;
  a=a^ b;
  printf("%d%d\n",a,b);
  return 0;
}
  
