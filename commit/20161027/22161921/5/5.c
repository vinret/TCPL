#include<stdio.h>
int main()
{
      int  A,B;
      int  da,db,pa=0,pb=0;
      scanf("%d%d%d%d",&A,&B,&da,&db);
      while(A!=0)
      {
       if(A%10==da)
       pa=pa*10+da;
       A=A/10;
      }
       while(B!=0)
        {
         if(B%10==db)
         pb=pb*10+db;
        B=B/10;
        }
       printf("%d\n",pa+pb);
       return  0;
}
