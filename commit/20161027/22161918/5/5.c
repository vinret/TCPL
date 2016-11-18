#include<stdio.h>
int main()
{
  int A,DA,B,DB,PA=0,PB=0;
  printf("请输入相应的数：\n");
  scanf("%d%1d%d%1d",&A,&DA,&B,&DB);
  while(A>0)
  {
    int a;
    a=A%10;
    if(a==DA)
    {
      PA=PA*10+a;
      A=A/10;
    }
    else
      A=A/10;
  }
  while(B>0)
  {
    int b;
    b=B%10;
    if(b==DB)
    {
      PB=PB*10+b;
      B=B/10;
    }
    else
      B=B/10;
  }
  printf("PA+PB=%d\n",PA+PB);
  return 0;
}
