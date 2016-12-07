#include <stdio.h>
int LCM(int m,int n)
{
   if(m<n) 
    { m=m^n;n=m^n;m=m^n; }
   int tem,pro=m*n;
   while(m%n)
    {
      tem=n;
      n=m%n;
      m=tem;
    }
  return pro/n;
}

int main()
{
  int m=0,n=0;
  while(m<1||n<1)
  { printf("please input two integers: ");
    scanf("%d %d",&m,&n); }
  printf("their LCM is: %d\n",LCM(m,n));
  return 0;
}
