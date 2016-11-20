#include<stdio.h>
int main()
{
  int a,da,b,db,pa=0,pb=0;
  scanf("%d %d %d %d",&a,&da,&b,&db);
  while(a!=0)
  {
    if(a%10==da)
      pa=pa*10+da;
    a=a/10;
  }
  while(b!=0)
  {
    if (b%10==db)
      pb=pb*10+db;
    b=b/10;
  }
  printf("%d",pa+pb);
  return 0;
}
