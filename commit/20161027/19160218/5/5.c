#include<stdio.h>
#include<math.h>
int main()
{
 int A,Da,B,Db;
 int Pa=0;
 int Pb=0;
 int n,m;
 int i=0;
 int j=0;
 scanf("%d%d%d%d",&A,&Da,&B,&Db);
 do 
 { n=A%10;
   A=A/10;
   if(n==Da)
   {
   Pa=Pa+Da*pow(10,i);
   i++;
   }
  }while(A!=0);
 do 
 { m=B%10;
   B=B/10;
   if(m==Db)
   {
   Pb=Pb+Db*pow(10,j);
   j++;
   }
  }while(B!=0);
 printf("%d",Pa+Pb);
 return 0;
}
