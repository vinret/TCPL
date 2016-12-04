#include <stdio.h>
int GCD_iterative(int m,int n)
{int b;
 b=m%n;
 if(b==0) return n;
 else b=GCD_iterative(n,b);
}
int main()
{
int a,m,n;
printf("input m,n :");
scanf("%d %d",&m,&n);
a=GCD_iterative(m,n);
printf("%d\n",a);
return 0;
}

