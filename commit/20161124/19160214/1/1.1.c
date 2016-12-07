#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{int m,n;
printf("please input m,n:\n");
scanf("%d%d",&m,&n);
 n=GCD_recursive(m,n);
printf("GCD is %d\n",n);
return 0;
}
int GCD_recursive(int m,int n)
{
if(m<n)
{int c=m;
m=n;
n=c;
}
if(m%n==0)
return n;
else
return GCD_recursive(n,m%n);
}
