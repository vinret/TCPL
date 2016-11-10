#include <stdio.h>
int main()
{
    int A,DA,B,DB,PA=0,PB=0;
    scanf("%d,%d,%d,%d",&A,&DA,&B,&DB);
    do
    {
      int a;
      a=A%10;
      if(a==DA)
      {PA=PA*10+a;
      A=A/10;}
      else
      A=A/10;
    }while(A>0);
    do
    {
      int b;
      b=B%10;
      if(b==DB)
      {PB=PB*10+b;
      B=B/10;}
      else
      B=B/10;
    }while(B>0);
printf("PA+PB=%d\n",PA+PB);
return 0;
}
