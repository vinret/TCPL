#include <stdio.h>
int GCD_iterative(int m,int n)
{int b;
 b=m%n;
 if(b==0) return n;
 else b=GCD_iterative(n,b);
}
int LCM(int m,int n)
{
int a,jg;
a=GCD_iterative(m,n);
jg=a*(m/a)*(n/a);
return jg;
}
int main()
{
int m,n,a;
scanf("%d %d",&m,&n);
a=LCM(m,n);
printf("%d\n",a);
return 0;
}



