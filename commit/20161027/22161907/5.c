#include<stdio.h>
int main()
{
    int A,Da,B,Db;
    int Pa,Pb;
    scanf("%d,%d,%d,%d", &A,&Da,&B,&Db);
    while (A!=0)
    { if (A%10 == Da)
      {   Pa=Pa*10+Da;
          A=A/10;
      }   
      else A=A/10;
    }
    while (B!=0)
    {  if (B%10 == Db)
       {  Pb=Pb*10+Db;
          B=B/10;
       }
      else B=B/10;
    }
      printf("%d\n", Pa+Pb);
      return 0;
}
