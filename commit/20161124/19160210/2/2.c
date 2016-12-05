#include<stdio.h>
int LCM(int m,int n)
{
int a=1,b=m,c=n;
while(a!=0)
  if (m>n)
    {a=m%n;m=n;n=a;}
    else
     {a=n%m;n=m;m=a;}
  if (m>n) return b*c/m;
   else return b*c/n;
}

int main()
{int m,n;
scanf("%d%d",&m,&n);
 printf("%d\n",LCM(m,n));
 return 0;
}


