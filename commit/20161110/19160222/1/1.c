#include<stdio.h>
int C(int n,int k);

int C(int n,int k)
{
 int i,C,N=1,K=1;
 for(i=0;i<=k-1;i++)
  {
  N=N*(n-i);
  K=K*(k-i);
  }
 C=N/K;
 return C;
}

int main()
{
 int n,k,j,l;
 scanf("%d",&j);
 for(n=0;n<=j;n++)
  {
  for(l=j-n;l>=0;l--)
   {
   printf("  ");
   }
  for(k=0;k<=n;k++)
   {
   printf("%4d",C(n,k));
   }
  printf("\n");
  }
return 0;
}
