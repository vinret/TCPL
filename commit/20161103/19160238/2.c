#include <stdio.h>
int main()
{
 int i,t;
 double a,b,c;
 scanf("%d",&t);
 for(i=1;i<=t;++i)
 {
  scanf("%lg %lg %lg",&a,&b,&c);
  if((a+b)>c)
   printf("Case #%d: true\n",i);
  else
   printf("Case #%d: false\n",i);
  } 
return 0;
}
