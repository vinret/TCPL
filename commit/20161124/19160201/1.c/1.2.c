
#include<stdio.h>
int main()
{
 int m,n,p,q;
 printf("Please input tow number:");
 scanf("%d,%d",&n,&m);
 if(n>m)
 {
  p=n,n=m,m=p;
 }
  while(m%n!=0)
 {
  q=m%n;
  m=n;
  n=q;
 }

 printf("their GCD is %d\n");
 return 0;
}
