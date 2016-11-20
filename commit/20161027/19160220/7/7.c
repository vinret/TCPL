#include <stdio.h>
int pow_mod(int a,int b,int c)
{a=a%c;
 int i,res=1;
 for(i=1;i<=b;++i)
   res=res*a%c;
 return res;
}
int main()
{
  int a,b,c;
  printf("Input a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  printf("%d",pow_mod(a,b,c));
  return 0;
}
