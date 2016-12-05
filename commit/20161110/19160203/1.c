#include <stdio.h>
int Fac(int n)
{ if(n==0)
    return 1;
  else
    return n*Fac(n-1);
}
void YangHuiTriangle(int n)
{ int i;
  for(i=0;i<=n;i++)
   {int a;
    a=Fac(n)/(Fac(i)*Fac(n-i));
    printf("%d\t\t",a);}
}  
int main()
{
  int n;
  printf("Please input lines(n):");
  scanf("%d",&n);
  for(int i=0;i<=n-1;i++)
    {for(int j=0;j<=n-i-2;j++)
       printf("\t");
     YangHuiTriangle(i);
     printf("\n");}
  return 0;
}
