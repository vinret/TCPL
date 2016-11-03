#include<stdio.h>
int main()
{
  int i,a,b,c;
  scanf("%d",&i);
  a=i%10;
  b=i/10%10;
  c=i/100;


  i=c+b*10+a*100;
  printf("%d\n",i);
  return 0;
}


