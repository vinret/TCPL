#include<stdio.h>
int GCD_recursive(int m,int n)
{
int a=1;
while(a!=0)
  if (m>n)
    {a=m%n;m=n;n=a;}
    else
     {a=n%m;n=m;m=a;}
  if (m>n) return m;
   else return n;
}

int main()
{int m,n;
scanf("%d%d",&m,&n);
 printf("%d\n",GCD_recursive(m,n));
 return 0;
}

