#include<stdio.h>
int main(void)
{
  int A,Da,B,Db;
  int Pa=0,Pb=0;
  printf("请输入A Da B Db: \n");
  scanf("%d %d %d %d",&A,&Da,&B,&Db);
  
  int a;
  while(A!=0)
  {
   a=A%10;
   if(a==Da)
   {
     Pa=Pa*10+a;
     A=A/10;
   }
   else A=A/10;
  }

  int b;
  while(B!=0)
   {
    b=B%10;
    if(b==Db)
    {
      Pb=Pb*10+b;
      B=B/10;
    }
    else B=B/10;
   }
    printf("Pa + Pb = %d\n",Pa+Pb);
    return 0;
}
