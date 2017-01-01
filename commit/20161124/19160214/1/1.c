#include<stdio.h>
int GCD_iterative(int m,int n);
int main()
{printf("please input m,n:\n");
 int m,n;
  m=GCD_iterative(m,n);
 printf("GCD is %d\n",m);
return 0;
}
int GCD_iterative(int m,int n)
{int i;
scanf("%d%d",&m,&n);
 if(m<n)
 {int c=m;
  m=n;
  n=c;}
while(i!=0)
{i=m%n;
 m=n;
  n=i;
}
return m;
}
