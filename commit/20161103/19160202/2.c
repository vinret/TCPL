#include <stdio.h>
int main()
{
  int i, n;
  double a,b,c;
  scanf("%d",&n);
  for(i=1;i<=n;++i)
{
  scanf("%lg %lg %lg",&a,&b,&c);
  if((a+b)>c)
  printf("Case #%d: true\n",i);
  else
  printf("Case #%d: false\n",i);
}
  return 0;
}
