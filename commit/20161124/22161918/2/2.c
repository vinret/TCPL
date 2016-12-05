#include<stdio.h>
int LCM(int m,int n);
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",LCM(a,b));
  return 0;
}
int LCM(int m,int n)
{
  int i=1,j,k;
  j=m;
  k=n;
  while(i!=0)
  {  
     i=j%k;
     j=k;
     k=i;
  }
  return m*n/j;
}
