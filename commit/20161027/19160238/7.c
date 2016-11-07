#include<stdio.h>
int main()
{
  long long a,b,c,x=1;
  scanf("%Ld%Ld%Ld",&a,&b,&c);
  a%=c;
  while(b)
  {
   if(b&1)
    x=(x*a)%c;
    a=(a*a)%c;
    b/=2;
    }
  printf("%Ld\n",x);
  return 0;
}
