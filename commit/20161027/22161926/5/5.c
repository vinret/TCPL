#include<stdio.h>
int main()
{
    int A,da,B,db,pa,pb;
    pa=0;
    pb=0;
    scanf("%d %d %d %d",&A,&da,&B,&db);
    while(A!=0)
    {
      if(A%10==da)
      {
         pa=pa*10+da;
      }
      A=A/10;
    }
    while(B!=0)
    {
      if(B%10==db)
      { 
        pb=pb*10+db;
      }
      B=B/10;
    }
    printf("%d\n",pb+pa);
    return 0;
}
